// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTLAYOUT_HPP_
#define _GI_GTK_CONSTRAINTLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class Constraint;
class ConstraintGuide;
class ConstraintTarget;

class ConstraintLayout;

namespace base {


#define GI_GTK_CONSTRAINTLAYOUT_BASE base::ConstraintLayoutBase
class ConstraintLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkConstraintLayout BaseObjectType;

ConstraintLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_constraint_layout_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkLayoutManager* /*full*/ gtk_constraint_layout_new ();
// ::GtkConstraintLayout* /*full*/ gtk_constraint_layout_new ();
static GI_INLINE_DECL Gtk::ConstraintLayout new_ () noexcept;

// void gtk_constraint_layout_add_constraint (GtkConstraintLayout* layout /*none*/, GtkConstraint* constraint /*full*/);
// void gtk_constraint_layout_add_constraint (::GtkConstraintLayout* layout /*none*/, ::GtkConstraint* constraint /*full*/);
GI_INLINE_DECL void add_constraint (Gtk::Constraint constraint) noexcept;

// GList* /*container*/ gtk_constraint_layout_add_constraints_from_description (GtkConstraintLayout* layout /*none*/, const char* const* lines /*none*/, gsize n_lines, int hspacing, int vspacing, GError** error /*none*/, const char* first_view /*none*/,  ..._ /*none*/);
// ::GList* /*container*/ gtk_constraint_layout_add_constraints_from_description (::GtkConstraintLayout* layout /*none*/, const char** lines /*none*/, gsize n_lines, gint hspacing, gint vspacing, ::GError* error /*none*/, const char* first_view /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_constraints_from_descriptionv, varargs not supported

// GList* /*container*/ gtk_constraint_layout_add_constraints_from_descriptionv (GtkConstraintLayout* layout /*none*/, const char* const* lines /*none*/, gsize n_lines, int hspacing, int vspacing, GHashTable* views /*none*/, GError ** error);
// ::GList* /*container*/ gtk_constraint_layout_add_constraints_from_descriptionv (::GtkConstraintLayout* layout /*none*/, const char** lines /*none*/, gsize n_lines, gint hspacing, gint vspacing, ::GHashTable* views /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t> add_constraints_from_description (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> lines, gint hspacing, gint vspacing, gi::CollectionParameter<GHashTable, std::pair<char*, ::GtkConstraintTarget*>, gi::transfer_none_t> views);
GI_INLINE_DECL gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t> add_constraints_from_description (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> lines, gint hspacing, gint vspacing, gi::CollectionParameter<GHashTable, std::pair<char*, ::GtkConstraintTarget*>, gi::transfer_none_t> views, GLib::Error * _error) noexcept;

// void gtk_constraint_layout_add_guide (GtkConstraintLayout* layout /*none*/, GtkConstraintGuide* guide /*full*/);
// void gtk_constraint_layout_add_guide (::GtkConstraintLayout* layout /*none*/, ::GtkConstraintGuide* guide /*full*/);
GI_INLINE_DECL void add_guide (Gtk::ConstraintGuide guide) noexcept;

// GListModel* /*full*/ gtk_constraint_layout_observe_constraints (GtkConstraintLayout* layout /*none*/);
// ::GListModel* /*full*/ gtk_constraint_layout_observe_constraints (::GtkConstraintLayout* layout /*none*/);
GI_INLINE_DECL Gio::ListModel observe_constraints () noexcept;

// GListModel* /*full*/ gtk_constraint_layout_observe_guides (GtkConstraintLayout* layout /*none*/);
// ::GListModel* /*full*/ gtk_constraint_layout_observe_guides (::GtkConstraintLayout* layout /*none*/);
GI_INLINE_DECL Gio::ListModel observe_guides () noexcept;

// void gtk_constraint_layout_remove_all_constraints (GtkConstraintLayout* layout /*none*/);
// void gtk_constraint_layout_remove_all_constraints (::GtkConstraintLayout* layout /*none*/);
GI_INLINE_DECL void remove_all_constraints () noexcept;

// void gtk_constraint_layout_remove_constraint (GtkConstraintLayout* layout /*none*/, GtkConstraint* constraint /*none*/);
// void gtk_constraint_layout_remove_constraint (::GtkConstraintLayout* layout /*none*/, ::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL void remove_constraint (Gtk::Constraint constraint) noexcept;

// void gtk_constraint_layout_remove_guide (GtkConstraintLayout* layout /*none*/, GtkConstraintGuide* guide /*none*/);
// void gtk_constraint_layout_remove_guide (::GtkConstraintLayout* layout /*none*/, ::GtkConstraintGuide* guide /*none*/);
GI_INLINE_DECL void remove_guide (Gtk::ConstraintGuide guide) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraintlayout_extra_def.hpp>)
#include <gtk/constraintlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraintlayout_extra.hpp>)
#include <gtk/constraintlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ConstraintLayout : public GI_GTK_CONSTRAINTLAYOUT_BASE
{ typedef GI_GTK_CONSTRAINTLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkConstraintLayout>
{ typedef Gtk::ConstraintLayout type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ConstraintLayoutClassDef
{
typedef ConstraintLayoutClassDef self;
public:
typedef Gtk::ConstraintLayout instance_type;
typedef ::GtkConstraintLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ConstraintLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConstraintLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::ConstraintLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::ConstraintLayoutClassDef;
typedef ConstraintLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ConstraintLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct ConstraintLayoutClassDef::TypeInitData
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

using ConstraintLayoutImpl = detail::ObjectImpl<ConstraintLayout, internal::ConstraintLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
