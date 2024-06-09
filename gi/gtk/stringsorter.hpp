// AUTO-GENERATED

#ifndef _GI_GTK_STRINGSORTER_HPP_
#define _GI_GTK_STRINGSORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class StringSorter;

namespace base {


#define GI_GTK_STRINGSORTER_BASE base::StringSorterBase
class StringSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkStringSorter BaseObjectType;

StringSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_string_sorter_get_type(); } 

// GtkStringSorter* /*full*/ gtk_string_sorter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkStringSorter* /*full*/ gtk_string_sorter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkCollation gtk_string_sorter_get_collation (GtkStringSorter* self /*none*/);
// ::GtkCollation gtk_string_sorter_get_collation (::GtkStringSorter* self /*none*/);
GI_INLINE_DECL Gtk::Collation get_collation () noexcept;

// GtkExpression* /*none,nullable*/ gtk_string_sorter_get_expression (GtkStringSorter* self /*none*/);
//  /*none,nullable*/ gtk_string_sorter_get_expression (::GtkStringSorter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_string_sorter_get_ignore_case (GtkStringSorter* self /*none*/);
// gboolean gtk_string_sorter_get_ignore_case (::GtkStringSorter* self /*none*/);
GI_INLINE_DECL bool get_ignore_case () noexcept;

// void gtk_string_sorter_set_collation (GtkStringSorter* self /*none*/, GtkCollation collation);
// void gtk_string_sorter_set_collation (::GtkStringSorter* self /*none*/, ::GtkCollation collation);
GI_INLINE_DECL void set_collation (Gtk::Collation collation) noexcept;

// void gtk_string_sorter_set_expression (GtkStringSorter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_string_sorter_set_expression (::GtkStringSorter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_string_sorter_set_ignore_case (GtkStringSorter* self /*none*/, gboolean ignore_case);
// void gtk_string_sorter_set_ignore_case (::GtkStringSorter* self /*none*/, gboolean ignore_case);
GI_INLINE_DECL void set_ignore_case (gboolean ignore_case) noexcept;

gi::property_proxy<Gtk::Collation, base::StringSorterBase> property_collation()
{ return gi::property_proxy<Gtk::Collation, base::StringSorterBase> (*this, "collation"); }
const gi::property_proxy<Gtk::Collation, base::StringSorterBase> property_collation() const
{ return gi::property_proxy<Gtk::Collation, base::StringSorterBase> (*this, "collation"); }

gi::property_proxy<bool, base::StringSorterBase> property_ignore_case()
{ return gi::property_proxy<bool, base::StringSorterBase> (*this, "ignore-case"); }
const gi::property_proxy<bool, base::StringSorterBase> property_ignore_case() const
{ return gi::property_proxy<bool, base::StringSorterBase> (*this, "ignore-case"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringsorter_extra_def.hpp>)
#include <gtk/stringsorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringsorter_extra.hpp>)
#include <gtk/stringsorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StringSorter : public GI_GTK_STRINGSORTER_BASE
{ typedef GI_GTK_STRINGSORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStringSorter>
{ typedef Gtk::StringSorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StringSorterClassDef
{
typedef StringSorterClassDef self;
public:
typedef Gtk::StringSorter instance_type;
typedef ::GtkStringSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StringSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StringSorterClass: public detail::ClassTemplate<Gtk::impl::internal::StringSorterClassDef, Gtk::impl::internal::SorterClass>
{
friend class internal::StringSorterClassDef;
typedef StringSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StringSorterClassDef, Gtk::impl::internal::SorterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct StringSorterClassDef::TypeInitData
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

using StringSorterImpl = detail::ObjectImpl<StringSorter, internal::StringSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
