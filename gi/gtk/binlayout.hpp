// AUTO-GENERATED

#ifndef _GI_GTK_BINLAYOUT_HPP_
#define _GI_GTK_BINLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class BinLayout;

namespace base {


#define GI_GTK_BINLAYOUT_BASE base::BinLayoutBase
class BinLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkBinLayout BaseObjectType;

BinLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_bin_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_bin_layout_new ();
// ::GtkBinLayout* /*full*/ gtk_bin_layout_new ();
static GI_INLINE_DECL Gtk::BinLayout new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/binlayout_extra_def.hpp>)
#include <gtk/binlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/binlayout_extra.hpp>)
#include <gtk/binlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BinLayout : public GI_GTK_BINLAYOUT_BASE
{ typedef GI_GTK_BINLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBinLayout>
{ typedef Gtk::BinLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BinLayoutClassDef
{
typedef BinLayoutClassDef self;
public:
typedef Gtk::BinLayout instance_type;
typedef ::GtkBinLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BinLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BinLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::BinLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::BinLayoutClassDef;
typedef BinLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BinLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct BinLayoutClassDef::TypeInitData
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

using BinLayoutImpl = detail::ObjectImpl<BinLayout, internal::BinLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
