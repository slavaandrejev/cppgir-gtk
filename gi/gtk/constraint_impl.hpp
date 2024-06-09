// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINT_IMPL_HPP_
#define _GI_GTK_CONSTRAINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkConstraint* /*full*/ gtk_constraint_new (gpointer target /*none,nullable*/, GtkConstraintAttribute target_attribute, GtkConstraintRelation relation, gpointer source /*none,nullable*/, GtkConstraintAttribute source_attribute, double multiplier, double constant, int strength);
// ::GtkConstraint* /*full*/ gtk_constraint_new (::GtkConstraintTarget* target /*none,nullable*/, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, ::GtkConstraintTarget* source /*none,nullable*/, ::GtkConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength);
Gtk::Constraint base::ConstraintBase::new_ (Gtk::ConstraintTarget target, Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, Gtk::ConstraintTarget source, Gtk::ConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength) noexcept
{
  typedef ::GtkConstraint* (*call_wrap_t) (::GtkConstraintTarget* target, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, ::GtkConstraintTarget* source, ::GtkConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_new;
  auto strength_to_c = strength;
  auto constant_to_c = constant;
  auto multiplier_to_c = multiplier;
  auto source_attribute_to_c = gi::unwrap (source_attribute);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  auto relation_to_c = gi::unwrap (relation);
  auto target_attribute_to_c = gi::unwrap (target_attribute);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkConstraintTarget*) (target_to_c), (::GtkConstraintAttribute) (target_attribute_to_c), (::GtkConstraintRelation) (relation_to_c), (::GtkConstraintTarget*) (source_to_c), (::GtkConstraintAttribute) (source_attribute_to_c), (gdouble) (multiplier_to_c), (gdouble) (constant_to_c), (gint) (strength_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::Constraint base::ConstraintBase::new_ (Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, Gtk::ConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength) noexcept
{
  typedef ::GtkConstraint* (*call_wrap_t) (::GtkConstraintTarget* target, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, ::GtkConstraintTarget* source, ::GtkConstraintAttribute source_attribute, gdouble multiplier, gdouble constant, gint strength);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_new;
  auto strength_to_c = strength;
  auto constant_to_c = constant;
  auto multiplier_to_c = multiplier;
  auto source_attribute_to_c = gi::unwrap (source_attribute);
  auto source_to_c = nullptr;
  auto relation_to_c = gi::unwrap (relation);
  auto target_attribute_to_c = gi::unwrap (target_attribute);
  auto target_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkConstraintTarget*) (target_to_c), (::GtkConstraintAttribute) (target_attribute_to_c), (::GtkConstraintRelation) (relation_to_c), (::GtkConstraintTarget*) (source_to_c), (::GtkConstraintAttribute) (source_attribute_to_c), (gdouble) (multiplier_to_c), (gdouble) (constant_to_c), (gint) (strength_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkConstraint* /*full*/ gtk_constraint_new_constant (gpointer target /*none,nullable*/, GtkConstraintAttribute target_attribute, GtkConstraintRelation relation, double constant, int strength);
// ::GtkConstraint* /*full*/ gtk_constraint_new_constant (::GtkConstraintTarget* target /*none,nullable*/, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, gdouble constant, gint strength);
Gtk::Constraint base::ConstraintBase::new_constant (Gtk::ConstraintTarget target, Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, gdouble constant, gint strength) noexcept
{
  typedef ::GtkConstraint* (*call_wrap_t) (::GtkConstraintTarget* target, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, gdouble constant, gint strength);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_new_constant;
  auto strength_to_c = strength;
  auto constant_to_c = constant;
  auto relation_to_c = gi::unwrap (relation);
  auto target_attribute_to_c = gi::unwrap (target_attribute);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkConstraintTarget*) (target_to_c), (::GtkConstraintAttribute) (target_attribute_to_c), (::GtkConstraintRelation) (relation_to_c), (gdouble) (constant_to_c), (gint) (strength_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::Constraint base::ConstraintBase::new_constant (Gtk::ConstraintAttribute target_attribute, Gtk::ConstraintRelation relation, gdouble constant, gint strength) noexcept
{
  typedef ::GtkConstraint* (*call_wrap_t) (::GtkConstraintTarget* target, ::GtkConstraintAttribute target_attribute, ::GtkConstraintRelation relation, gdouble constant, gint strength);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_new_constant;
  auto strength_to_c = strength;
  auto constant_to_c = constant;
  auto relation_to_c = gi::unwrap (relation);
  auto target_attribute_to_c = gi::unwrap (target_attribute);
  auto target_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkConstraintTarget*) (target_to_c), (::GtkConstraintAttribute) (target_attribute_to_c), (::GtkConstraintRelation) (relation_to_c), (gdouble) (constant_to_c), (gint) (strength_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double gtk_constraint_get_constant (GtkConstraint* constraint /*none*/);
// gdouble gtk_constraint_get_constant (::GtkConstraint* constraint /*none*/);
gdouble base::ConstraintBase::get_constant () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_constant;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}

// double gtk_constraint_get_multiplier (GtkConstraint* constraint /*none*/);
// gdouble gtk_constraint_get_multiplier (::GtkConstraint* constraint /*none*/);
gdouble base::ConstraintBase::get_multiplier () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_multiplier;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}

// GtkConstraintRelation gtk_constraint_get_relation (GtkConstraint* constraint /*none*/);
// ::GtkConstraintRelation gtk_constraint_get_relation (::GtkConstraint* constraint /*none*/);
Gtk::ConstraintRelation base::ConstraintBase::get_relation () noexcept
{
  typedef ::GtkConstraintRelation (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_relation;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_source (GtkConstraint* constraint /*none*/);
// ::GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_source (::GtkConstraint* constraint /*none*/);
Gtk::ConstraintTarget base::ConstraintBase::get_source () noexcept
{
  typedef ::GtkConstraintTarget* (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_source;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkConstraintAttribute gtk_constraint_get_source_attribute (GtkConstraint* constraint /*none*/);
// ::GtkConstraintAttribute gtk_constraint_get_source_attribute (::GtkConstraint* constraint /*none*/);
Gtk::ConstraintAttribute base::ConstraintBase::get_source_attribute () noexcept
{
  typedef ::GtkConstraintAttribute (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_source_attribute;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_constraint_get_strength (GtkConstraint* constraint /*none*/);
// gint gtk_constraint_get_strength (::GtkConstraint* constraint /*none*/);
gint base::ConstraintBase::get_strength () noexcept
{
  typedef gint (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_strength;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}

// GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_target (GtkConstraint* constraint /*none*/);
// ::GtkConstraintTarget* /*none,nullable*/ gtk_constraint_get_target (::GtkConstraint* constraint /*none*/);
Gtk::ConstraintTarget base::ConstraintBase::get_target () noexcept
{
  typedef ::GtkConstraintTarget* (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_target;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkConstraintAttribute gtk_constraint_get_target_attribute (GtkConstraint* constraint /*none*/);
// ::GtkConstraintAttribute gtk_constraint_get_target_attribute (::GtkConstraint* constraint /*none*/);
Gtk::ConstraintAttribute base::ConstraintBase::get_target_attribute () noexcept
{
  typedef ::GtkConstraintAttribute (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_get_target_attribute;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_constraint_is_attached (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_attached (::GtkConstraint* constraint /*none*/);
bool base::ConstraintBase::is_attached () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_is_attached;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_constraint_is_constant (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_constant (::GtkConstraint* constraint /*none*/);
bool base::ConstraintBase::is_constant () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_is_constant;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_constraint_is_required (GtkConstraint* constraint /*none*/);
// gboolean gtk_constraint_is_required (::GtkConstraint* constraint /*none*/);
bool base::ConstraintBase::is_required () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_is_required;
  auto _temp_ret = call_wrap_v ((::GtkConstraint*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraint_extra_def_impl.hpp>)
#include <gtk/constraint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraint_extra_impl.hpp>)
#include <gtk/constraint_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ConstraintClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkConstraintClass *methods = (::GtkConstraintClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
