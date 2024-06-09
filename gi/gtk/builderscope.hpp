// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERSCOPE_HPP_
#define _GI_GTK_BUILDERSCOPE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Builder;

class BuilderScope;

namespace base {


#define GI_GTK_BUILDERSCOPE_BASE base::BuilderScopeBase
class BuilderScopeBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkBuilderScope BaseObjectType;

BuilderScopeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_builder_scope_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builderscope_extra_def.hpp>)
#include <gtk/builderscope_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builderscope_extra.hpp>)
#include <gtk/builderscope_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BuilderScope : public GI_GTK_BUILDERSCOPE_BASE
{ typedef GI_GTK_BUILDERSCOPE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuilderScope>
{ typedef Gtk::BuilderScope type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BuilderScopeInterfaceDef
{
typedef BuilderScopeInterfaceDef self;
public:
typedef Gtk::BuilderScope instance_type;
typedef ::GtkBuilderScopeInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(create_closure) = self;
using GI_MEMBER_CHECK_CONFLICT(get_type_from_function) = self;
using GI_MEMBER_CHECK_CONFLICT(get_type_from_name) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~BuilderScopeInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GClosure* /*full*/ BuilderScope::create_closure (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/, GtkBuilderClosureFlags flags, GObject* object /*none*/, GError ** error);
// ::GClosure* /*full*/ BuilderScope::create_closure (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/, ::GtkBuilderClosureFlags flags, ::GObject* object /*none*/, GError ** error);
virtual GObject::Closure create_closure_ (Gtk::Builder builder, const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error) = 0;

// GType BuilderScope::get_type_from_function (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/);
// GType BuilderScope::get_type_from_function (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/);
virtual GType get_type_from_function_ (Gtk::Builder builder, const gi::cstring_v function_name) noexcept = 0;

// GType BuilderScope::get_type_from_name (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* type_name /*none*/);
// GType BuilderScope::get_type_from_name (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* type_name /*none*/);
virtual GType get_type_from_name_ (Gtk::Builder builder, const gi::cstring_v type_name) noexcept = 0;


};

using BuilderScopeImpl = detail::InterfaceImpl<BuilderScopeInterfaceDef>;

class BuilderScopeInterfaceClassImpl: public detail::InterfaceClassImpl<BuilderScopeImpl>
{
friend class internal::BuilderScopeInterfaceDef;
typedef BuilderScopeInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<BuilderScopeImpl> super;

protected:
using super::super;

// GClosure* /*full*/ BuilderScope::create_closure (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/, GtkBuilderClosureFlags flags, GObject* object /*none*/, GError ** error);
// ::GClosure* /*full*/ BuilderScope::create_closure (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/, ::GtkBuilderClosureFlags flags, ::GObject* object /*none*/, GError ** error);
GI_INLINE_DECL GObject::Closure create_closure_ (Gtk::Builder builder, const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error) override;

// GType BuilderScope::get_type_from_function (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/);
// GType BuilderScope::get_type_from_function (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/);
GI_INLINE_DECL GType get_type_from_function_ (Gtk::Builder builder, const gi::cstring_v function_name) noexcept override;

// GType BuilderScope::get_type_from_name (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* type_name /*none*/);
// GType BuilderScope::get_type_from_name (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* type_name /*none*/);
GI_INLINE_DECL GType get_type_from_name_ (Gtk::Builder builder, const gi::cstring_v type_name) noexcept override;


};


struct BuilderScopeInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(BuilderScopeInterfaceClassImpl, create_closure)
  GI_MEMBER_DEFINE(BuilderScopeInterfaceClassImpl, get_type_from_function)
  GI_MEMBER_DEFINE(BuilderScopeInterfaceClassImpl, get_type_from_name)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_closure),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_type_from_function),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_type_from_name)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
