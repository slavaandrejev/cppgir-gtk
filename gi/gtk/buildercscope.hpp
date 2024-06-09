// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERCSCOPE_HPP_
#define _GI_GTK_BUILDERCSCOPE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class BuilderScope;

class BuilderCScope;

namespace base {


#define GI_GTK_BUILDERCSCOPE_BASE base::BuilderCScopeBase
class BuilderCScopeBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkBuilderCScope BaseObjectType;

BuilderCScopeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_builder_cscope_get_type(); } 

GI_INLINE_DECL Gtk::BuilderScope interface_ (gi::interface_tag<Gtk::BuilderScope>);

GI_INLINE_DECL operator Gtk::BuilderScope ();

// GtkBuilderScope* /*full*/ gtk_builder_cscope_new ();
// ::GtkBuilderCScope* /*full*/ gtk_builder_cscope_new ();
static GI_INLINE_DECL Gtk::BuilderCScope new_ () noexcept;

// void gtk_builder_cscope_add_callback_symbol (GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/, GCallback callback_symbol /*none*/);
// void gtk_builder_cscope_add_callback_symbol (::GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/,  callback_symbol /*none*/);
// SKIP; callback_symbol type  not supported

// void gtk_builder_cscope_add_callback_symbols (GtkBuilderCScope* self /*none*/, const char* first_callback_name /*none*/, GCallback first_callback_symbol /*none*/,  ..._ /*none*/);
// void gtk_builder_cscope_add_callback_symbols (::GtkBuilderCScope* self /*none*/, const char* first_callback_name /*none*/,  first_callback_symbol /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GCallback /*none,nullable*/ gtk_builder_cscope_lookup_callback_symbol (GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/);
//  /*none,nullable*/ gtk_builder_cscope_lookup_callback_symbol (::GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/);
// IGNORE; not introspectable,  type  not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildercscope_extra_def.hpp>)
#include <gtk/buildercscope_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildercscope_extra.hpp>)
#include <gtk/buildercscope_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BuilderCScope : public GI_GTK_BUILDERCSCOPE_BASE
{ typedef GI_GTK_BUILDERCSCOPE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuilderCScope>
{ typedef Gtk::BuilderCScope type; }; 

} // namespace repository

} // namespace gi

#include "builderscope.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BuilderCScopeClassDef
{
typedef BuilderCScopeClassDef self;
public:
typedef Gtk::BuilderCScope instance_type;
typedef ::GtkBuilderCScopeClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BuilderCScopeClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BuilderCScopeClass: public detail::ClassTemplate<Gtk::impl::internal::BuilderCScopeClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuilderScopeInterfaceClassImpl>
{
friend class internal::BuilderCScopeClassDef;
typedef BuilderCScopeClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BuilderCScopeClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuilderScopeInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuilderScopeInterfaceClassImpl GtkBuilderScopeInterface_type;



};


struct BuilderCScopeClassDef::TypeInitData
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

using BuilderCScopeImpl = detail::ObjectImpl<BuilderCScope, internal::BuilderCScopeClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
