// AUTO-GENERATED

#ifndef _GI_GIO_MENUATTRIBUTEITER_HPP_
#define _GI_GIO_MENUATTRIBUTEITER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class MenuAttributeIter;

namespace base {


#define GI_GIO_MENUATTRIBUTEITER_BASE base::MenuAttributeIterBase
class MenuAttributeIterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuAttributeIter BaseObjectType;

MenuAttributeIterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_attribute_iter_get_type(); } 

// const gchar* /*none*/ g_menu_attribute_iter_get_name (GMenuAttributeIter* iter /*none*/);
// const char* /*none*/ g_menu_attribute_iter_get_name (::GMenuAttributeIter* iter /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean g_menu_attribute_iter_get_next (GMenuAttributeIter* iter /*none*/, const gchar** out_name /*none,out,opt*/, GVariant** value /*full,out,opt*/);
// gboolean g_menu_attribute_iter_get_next (::GMenuAttributeIter* iter /*none*/, const char** out_name /*none,out,opt*/, ::GVariant** value /*full,out,opt*/);
GI_INLINE_DECL bool get_next (gi::cstring_v * out_name, GLib::Variant * value) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v, GLib::Variant> get_next () noexcept;

// GVariant* /*full*/ g_menu_attribute_iter_get_value (GMenuAttributeIter* iter /*none*/);
// ::GVariant* /*full*/ g_menu_attribute_iter_get_value (::GMenuAttributeIter* iter /*none*/);
GI_INLINE_DECL GLib::Variant get_value () noexcept;

// gboolean g_menu_attribute_iter_next (GMenuAttributeIter* iter /*none*/);
// gboolean g_menu_attribute_iter_next (::GMenuAttributeIter* iter /*none*/);
GI_INLINE_DECL bool next () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_def.hpp>)
#include <gio/menuattributeiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra.hpp>)
#include <gio/menuattributeiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuAttributeIter : public GI_GIO_MENUATTRIBUTEITER_BASE
{ typedef GI_GIO_MENUATTRIBUTEITER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuAttributeIter>
{ typedef Gio::MenuAttributeIter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MenuAttributeIterClassDef
{
typedef MenuAttributeIterClassDef self;
public:
typedef Gio::MenuAttributeIter instance_type;
typedef ::GMenuAttributeIterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_next) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MenuAttributeIterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter /*none*/, const gchar** out_name /*none,out,opt*/, GVariant** value /*full,out,opt*/);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter /*none*/, const char** out_name /*none,out,opt*/, ::GVariant** value /*full,out,opt*/);
virtual bool get_next_ (gi::cstring_v & out_name, GLib::Variant & value) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MenuAttributeIterClass: public detail::ClassTemplate<Gio::impl::internal::MenuAttributeIterClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::MenuAttributeIterClassDef;
typedef MenuAttributeIterClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MenuAttributeIterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter /*none*/, const gchar** out_name /*none,out,opt*/, GVariant** value /*full,out,opt*/);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter /*none*/, const char** out_name /*none,out,opt*/, ::GVariant** value /*full,out,opt*/);
GI_INLINE_DECL bool get_next_ (gi::cstring_v & out_name, GLib::Variant & value) noexcept override;


};


struct MenuAttributeIterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(MenuAttributeIterClass, get_next)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_next)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MenuAttributeIterImpl = detail::ObjectImpl<MenuAttributeIter, internal::MenuAttributeIterClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
