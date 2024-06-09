// AUTO-GENERATED

#ifndef _GI_GIO_INITABLE_HPP_
#define _GI_GIO_INITABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class Initable;

namespace base {


#define GI_GIO_INITABLE_BASE base::InitableBase
class InitableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GInitable BaseObjectType;

InitableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_initable_get_type(); } 

// gpointer /*full*/ g_initable_new (GType object_type, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* first_property_name /*none,nullable*/,  ..._ /*none*/);
// ::GObject* /*full*/ g_initable_new (GType object_type, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GObject* /*full*/ g_initable_new_valist (GType object_type, const gchar* first_property_name /*none*/, va_list var_args /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GObject* /*full*/ g_initable_new_valist (GType object_type, const char* first_property_name /*none*/,  var_args /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; not introspectable, var_args type  not supported

// gpointer /*full*/ g_initable_newv (GType object_type, guint n_parameters, GParameter* parameters /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GObject* /*full*/ g_initable_newv (GType object_type, guint n_parameters, * parameters /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated, container element not supported

// gboolean g_initable_init (GInitable* initable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_initable_init (::GInitable* initable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool init (Gio::Cancellable cancellable);
GI_INLINE_DECL bool init ();
GI_INLINE_DECL bool init (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool init (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/initable_extra_def.hpp>)
#include <gio/initable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/initable_extra.hpp>)
#include <gio/initable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Initable : public GI_GIO_INITABLE_BASE
{ typedef GI_GIO_INITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInitable>
{ typedef Gio::Initable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InitableIfaceDef
{
typedef InitableIfaceDef self;
public:
typedef Gio::Initable instance_type;
typedef ::GInitableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(init) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~InitableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Initable::init (GInitable* initable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Initable::init (::GInitable* initable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool init_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;


};

using InitableImpl = detail::InterfaceImpl<InitableIfaceDef>;

class InitableIfaceClassImpl: public detail::InterfaceClassImpl<InitableImpl>
{
friend class internal::InitableIfaceDef;
typedef InitableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<InitableImpl> super;

protected:
using super::super;

// gboolean Initable::init (GInitable* initable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Initable::init (::GInitable* initable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool init_ (Gio::Cancellable cancellable, GLib::Error * _error) override;


};


struct InitableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(InitableIfaceClassImpl, init)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, init)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
