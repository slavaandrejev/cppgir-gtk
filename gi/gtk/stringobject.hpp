// AUTO-GENERATED

#ifndef _GI_GTK_STRINGOBJECT_HPP_
#define _GI_GTK_STRINGOBJECT_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class StringObject;

namespace base {


#define GI_GTK_STRINGOBJECT_BASE base::StringObjectBase
class StringObjectBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStringObject BaseObjectType;

StringObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_string_object_get_type(); } 

// GtkStringObject* /*full*/ gtk_string_object_new (const char* string /*none*/);
// ::GtkStringObject* /*full*/ gtk_string_object_new (const char* string /*none*/);
static GI_INLINE_DECL Gtk::StringObject new_ (const gi::cstring_v string) noexcept;

// const char* /*none*/ gtk_string_object_get_string (GtkStringObject* self /*none*/);
// const char* /*none*/ gtk_string_object_get_string (::GtkStringObject* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_string () noexcept;

gi::property_proxy<gi::cstring, base::StringObjectBase> property_string()
{ return gi::property_proxy<gi::cstring, base::StringObjectBase> (*this, "string"); }
const gi::property_proxy<gi::cstring, base::StringObjectBase> property_string() const
{ return gi::property_proxy<gi::cstring, base::StringObjectBase> (*this, "string"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringobject_extra_def.hpp>)
#include <gtk/stringobject_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringobject_extra.hpp>)
#include <gtk/stringobject_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StringObject : public GI_GTK_STRINGOBJECT_BASE
{ typedef GI_GTK_STRINGOBJECT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStringObject>
{ typedef Gtk::StringObject type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StringObjectClassDef
{
typedef StringObjectClassDef self;
public:
typedef Gtk::StringObject instance_type;
typedef ::GtkStringObjectClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StringObjectClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StringObjectClass: public detail::ClassTemplate<Gtk::impl::internal::StringObjectClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::StringObjectClassDef;
typedef StringObjectClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StringObjectClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct StringObjectClassDef::TypeInitData
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

using StringObjectImpl = detail::ObjectImpl<StringObject, internal::StringObjectClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
