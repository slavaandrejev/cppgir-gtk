// AUTO-GENERATED

#ifndef _GI_GTK_MOUNTOPERATION_HPP_
#define _GI_GTK_MOUNTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class MountOperation;

namespace base {


#define GI_GTK_MOUNTOPERATION_BASE base::MountOperationBase
class MountOperationBase : public Gio::MountOperation
{
typedef Gio::MountOperation super_type;
public:
typedef ::GtkMountOperation BaseObjectType;

MountOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_mount_operation_get_type(); } 

// GMountOperation* /*full*/ gtk_mount_operation_new (GtkWindow* parent /*none,nullable*/);
// ::GtkMountOperation* /*full*/ gtk_mount_operation_new (::GtkWindow* parent /*none,nullable*/);
static GI_INLINE_DECL Gtk::MountOperation new_ (Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::MountOperation new_ () noexcept;

// GdkDisplay* /*none*/ gtk_mount_operation_get_display (GtkMountOperation* op /*none*/);
// ::GdkDisplay* /*none*/ gtk_mount_operation_get_display (::GtkMountOperation* op /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GtkWindow* /*none,nullable*/ gtk_mount_operation_get_parent (GtkMountOperation* op /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_mount_operation_get_parent (::GtkMountOperation* op /*none*/);
GI_INLINE_DECL Gtk::Window get_parent () noexcept;

// gboolean gtk_mount_operation_is_showing (GtkMountOperation* op /*none*/);
// gboolean gtk_mount_operation_is_showing (::GtkMountOperation* op /*none*/);
GI_INLINE_DECL bool is_showing () noexcept;

// void gtk_mount_operation_set_display (GtkMountOperation* op /*none*/, GdkDisplay* display /*none*/);
// void gtk_mount_operation_set_display (::GtkMountOperation* op /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL void set_display (Gdk::Display display) noexcept;

// void gtk_mount_operation_set_parent (GtkMountOperation* op /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_mount_operation_set_parent (::GtkMountOperation* op /*none*/, ::GtkWindow* parent /*none,nullable*/);
GI_INLINE_DECL void set_parent (Gtk::Window parent) noexcept;
GI_INLINE_DECL void set_parent () noexcept;

gi::property_proxy<Gdk::Display, base::MountOperationBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::MountOperationBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::MountOperationBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::MountOperationBase> (*this, "display"); }

gi::property_proxy<bool, base::MountOperationBase> property_is_showing()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-showing"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_showing() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-showing"); }

gi::property_proxy<Gtk::Window, base::MountOperationBase> property_parent()
{ return gi::property_proxy<Gtk::Window, base::MountOperationBase> (*this, "parent"); }
const gi::property_proxy<Gtk::Window, base::MountOperationBase> property_parent() const
{ return gi::property_proxy<Gtk::Window, base::MountOperationBase> (*this, "parent"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_def.hpp>)
#include <gtk/mountoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra.hpp>)
#include <gtk/mountoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MountOperation : public GI_GTK_MOUNTOPERATION_BASE
{ typedef GI_GTK_MOUNTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMountOperation>
{ typedef Gtk::MountOperation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MountOperationClassDef
{
typedef MountOperationClassDef self;
public:
typedef Gtk::MountOperation instance_type;
typedef ::GtkMountOperationClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MountOperationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MountOperationClass: public detail::ClassTemplate<Gtk::impl::internal::MountOperationClassDef, Gio::impl::internal::MountOperationClass>
{
friend class internal::MountOperationClassDef;
typedef MountOperationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MountOperationClassDef, Gio::impl::internal::MountOperationClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct MountOperationClassDef::TypeInitData
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

using MountOperationImpl = detail::ObjectImpl<MountOperation, internal::MountOperationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
