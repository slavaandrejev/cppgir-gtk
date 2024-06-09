// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINT_HPP_
#define _GI_GTK_CONSTRAINT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ConstraintTarget;

class Constraint;

namespace base {


#define GI_GTK_CONSTRAINT_BASE base::ConstraintBase
class ConstraintBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkConstraint BaseObjectType;

ConstraintBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_constraint_get_type(); } 

// GtkConstraint* /*full*/ gtk_constraint_new (gpointer target /*none,nullable*/, GtkConstraintAttribute target_attribute, GtkConstraintRelation relation, gpointer source /*none,nullable*/, GtkConstraintAttribute source_attribute, double multiplier, double constant, int strength);
// ::GtkConstraint* /*full*/ gtk_constraint_new (::GtkConstraintTarget* target /*none,nullable*/, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, ::GtkConstraintTarget* source /*none,nullable*/, ::GtkConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength);
static GI_INLINE_DECL Gtk::Constraint new_ (Gtk::ConstraintTarget target, Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, Gtk::ConstraintTarget source, Gtk::ConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength) noexcept;
static GI_INLINE_DECL Gtk::Constraint new_ (Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, Gtk::ConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength) noexcept;

// GtkConstraint* /*full*/ gtk_constraint_new_constant (gpointer target /*none,nullable*/, GtkConstraintAttribute target_attribute, GtkConstraintRelation relation, double constant, int strength);
// ::GtkConstraint* /*full*/ gtk_constraint_new_constant (::GtkConstraintTarget* target /*none,nullable*/, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, gdouble constant, gint strength);
static GI_INLINE_DECL Gtk::Constraint new_constant (Gtk::ConstraintTarget target, Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, gdouble constant, gint strength) noexcept;
static GI_INLINE_DECL Gtk::Constraint new_constant (Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, gdouble constant, gint strength) noexcept;

// double gtk_constraint_get_constant (GtkConstraint* constraint /*none*/);
// gdouble gtk_constraint_get_constant (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL gdouble get_constant () noexcept;

// double gtk_constraint_get_multiplier (GtkConstraint* constraint /*none*/);
// gdouble gtk_constraint_get_multiplier (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL gdouble get_multiplier () noexcept;

// GtkConstraintRelation gtk_constraint_get_relation (GtkConstraint* constraint /*none*/);
// ::GtkConstraintRelation gtk_constraint_get_relation (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL Gtk::ConstraintRelation get_relation () noexcept;

// GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_source (GtkConstraint* constraint /*none*/);
// ::GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_source (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL Gtk::ConstraintTarget get_source () noexcept;

// GtkConstraintAttribute gtk_constraint_get_source_attribute (GtkConstraint* constraint /*none*/);
// ::GtkConstraintAttribute gtk_constraint_get_source_attribute (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL Gtk::ConstraintAttribute get_source_attribute () noexcept;

// int gtk_constraint_get_strength (GtkConstraint* constraint /*none*/);
// gint gtk_constraint_get_strength (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL gint get_strength () noexcept;

// GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_target (GtkConstraint* constraint /*none*/);
// ::GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_target (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL Gtk::ConstraintTarget get_target () noexcept;

// GtkConstraintAttribute gtk_constraint_get_target_attribute (GtkConstraint* constraint /*none*/);
// ::GtkConstraintAttribute gtk_constraint_get_target_attribute (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL Gtk::ConstraintAttribute get_target_attribute () noexcept;

// gboolean gtk_constraint_is_attached (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_attached (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL bool is_attached () noexcept;

// gboolean gtk_constraint_is_constant (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_constant (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL bool is_constant () noexcept;

// gboolean gtk_constraint_is_required (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_required (::GtkConstraint* constraint /*none*/);
GI_INLINE_DECL bool is_required () noexcept;

gi::property_proxy<gdouble, base::ConstraintBase> property_constant()
{ return gi::property_proxy<gdouble, base::ConstraintBase> (*this, "constant"); }
const gi::property_proxy<gdouble, base::ConstraintBase> property_constant() const
{ return gi::property_proxy<gdouble, base::ConstraintBase> (*this, "constant"); }

gi::property_proxy<gdouble, base::ConstraintBase> property_multiplier()
{ return gi::property_proxy<gdouble, base::ConstraintBase> (*this, "multiplier"); }
const gi::property_proxy<gdouble, base::ConstraintBase> property_multiplier() const
{ return gi::property_proxy<gdouble, base::ConstraintBase> (*this, "multiplier"); }

gi::property_proxy<Gtk::ConstraintRelation, base::ConstraintBase> property_relation()
{ return gi::property_proxy<Gtk::ConstraintRelation, base::ConstraintBase> (*this, "relation"); }
const gi::property_proxy<Gtk::ConstraintRelation, base::ConstraintBase> property_relation() const
{ return gi::property_proxy<Gtk::ConstraintRelation, base::ConstraintBase> (*this, "relation"); }

gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> property_source()
{ return gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> (*this, "source"); }
const gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> property_source() const
{ return gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> (*this, "source"); }

gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> property_source_attribute()
{ return gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> (*this, "source-attribute"); }
const gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> property_source_attribute() const
{ return gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> (*this, "source-attribute"); }

gi::property_proxy<gint, base::ConstraintBase> property_strength()
{ return gi::property_proxy<gint, base::ConstraintBase> (*this, "strength"); }
const gi::property_proxy<gint, base::ConstraintBase> property_strength() const
{ return gi::property_proxy<gint, base::ConstraintBase> (*this, "strength"); }

gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> property_target()
{ return gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> (*this, "target"); }
const gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> property_target() const
{ return gi::property_proxy<Gtk::ConstraintTarget, base::ConstraintBase> (*this, "target"); }

gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> property_target_attribute()
{ return gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> (*this, "target-attribute"); }
const gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> property_target_attribute() const
{ return gi::property_proxy<Gtk::ConstraintAttribute, base::ConstraintBase> (*this, "target-attribute"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraint_extra_def.hpp>)
#include <gtk/constraint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraint_extra.hpp>)
#include <gtk/constraint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Constraint : public GI_GTK_CONSTRAINT_BASE
{ typedef GI_GTK_CONSTRAINT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkConstraint>
{ typedef Gtk::Constraint type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ConstraintClassDef
{
typedef ConstraintClassDef self;
public:
typedef Gtk::Constraint instance_type;
typedef ::GtkConstraintClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ConstraintClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConstraintClass: public detail::ClassTemplate<Gtk::impl::internal::ConstraintClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ConstraintClassDef;
typedef ConstraintClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ConstraintClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ConstraintClassDef::TypeInitData
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

using ConstraintImpl = detail::ObjectImpl<Constraint, internal::ConstraintClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
