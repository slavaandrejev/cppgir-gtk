// AUTO-GENERATED

#ifndef _GI_GTK_STRINGLIST_HPP_
#define _GI_GTK_STRINGLIST_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;

class StringList;

namespace base {


#define GI_GTK_STRINGLIST_BASE base::StringListBase
class StringListBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStringList BaseObjectType;

StringListBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_string_list_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkStringList* /*full*/ gtk_string_list_new (const char* const* strings /*none,nullable*/);
// ::GtkStringList* /*full*/ gtk_string_list_new (const char** strings /*none,nullable*/);
static GI_INLINE_DECL Gtk::StringList new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> strings) noexcept;

// void gtk_string_list_append (GtkStringList* self /*none*/, const char* string /*none*/);
// void gtk_string_list_append (::GtkStringList* self /*none*/, const char* string /*none*/);
GI_INLINE_DECL void append (const gi::cstring_v string) noexcept;

// const char* /*none,nullable*/ gtk_string_list_get_string (GtkStringList* self /*none*/, guint position);
// const char* /*none,nullable*/ gtk_string_list_get_string (::GtkStringList* self /*none*/, guint position);
GI_INLINE_DECL gi::cstring_v get_string (guint position) noexcept;

// void gtk_string_list_remove (GtkStringList* self /*none*/, guint position);
// void gtk_string_list_remove (::GtkStringList* self /*none*/, guint position);
GI_INLINE_DECL void remove (guint position) noexcept;

// void gtk_string_list_splice (GtkStringList* self /*none*/, guint position, guint n_removals, const char* const* additions /*none,nullable*/);
// void gtk_string_list_splice (::GtkStringList* self /*none*/, guint position, guint n_removals, const char** additions /*none,nullable*/);
GI_INLINE_DECL void splice (guint position, guint n_removals, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> additions) noexcept;

// void gtk_string_list_take (GtkStringList* self /*none*/, char* string /*full*/);
// void gtk_string_list_take (::GtkStringList* self /*none*/, char* string /*full*/);
GI_INLINE_DECL void take (gi::cstring string) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringlist_extra_def.hpp>)
#include <gtk/stringlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringlist_extra.hpp>)
#include <gtk/stringlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StringList : public GI_GTK_STRINGLIST_BASE
{ typedef GI_GTK_STRINGLIST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStringList>
{ typedef Gtk::StringList type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StringListClassDef
{
typedef StringListClassDef self;
public:
typedef Gtk::StringList instance_type;
typedef ::GtkStringListClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StringListClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StringListClass: public detail::ClassTemplate<Gtk::impl::internal::StringListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::StringListClassDef;
typedef StringListClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StringListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct StringListClassDef::TypeInitData
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

using StringListImpl = detail::ObjectImpl<StringList, internal::StringListClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
