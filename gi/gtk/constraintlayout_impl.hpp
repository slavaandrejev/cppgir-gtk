// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTLAYOUT_IMPL_HPP_
#define _GI_GTK_CONSTRAINTLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable ConstraintLayoutBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ConstraintLayoutBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkLayoutManager* /*full*/ gtk_constraint_layout_new ();
// ::GtkConstraintLayout* /*full*/ gtk_constraint_layout_new ();
Gtk::ConstraintLayout base::ConstraintLayoutBase::new_ () noexcept
{
  typedef ::GtkConstraintLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_constraint_layout_add_constraint (GtkConstraintLayout* layout /*none*/, GtkConstraint* constraint /*full*/);
// void gtk_constraint_layout_add_constraint (::GtkConstraintLayout* layout /*none*/, ::GtkConstraint* constraint /*full*/);
void base::ConstraintLayoutBase::add_constraint (Gtk::Constraint constraint) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintLayout* layout, ::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_add_constraint;
  auto constraint_to_c = gi::unwrap (constraint, gi::transfer_full);
  call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (::GtkConstraint*) (constraint_to_c));
}

// GList* /*container*/ gtk_constraint_layout_add_constraints_from_description (GtkConstraintLayout* layout /*none*/, const char* const* lines /*none*/, gsize n_lines, int hspacing, int vspacing, GError** error /*none*/, const char* first_view /*none*/,  ..._ /*none*/);
// ::GList* /*container*/ gtk_constraint_layout_add_constraints_from_description (::GtkConstraintLayout* layout /*none*/, const char** lines /*none*/, gsize n_lines, gint hspacing, gint vspacing, ::GError* error /*none*/, const char* first_view /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_constraints_from_descriptionv, varargs not supported

// GList* /*container*/ gtk_constraint_layout_add_constraints_from_descriptionv (GtkConstraintLayout* layout /*none*/, const char* const* lines /*none*/, gsize n_lines, int hspacing, int vspacing, GHashTable* views /*none*/, GError ** error);
// ::GList* /*container*/ gtk_constraint_layout_add_constraints_from_descriptionv (::GtkConstraintLayout* layout /*none*/, const char** lines /*none*/, gsize n_lines, gint hspacing, gint vspacing, ::GHashTable* views /*none*/, GError ** error);
gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t> base::ConstraintLayoutBase::add_constraints_from_description (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> lines, gint hspacing, gint vspacing, gi::CollectionParameter<GHashTable, std::pair<char*, ::GtkConstraintTarget*>, gi::transfer_none_t> views)
{
  typedef ::GList* (*call_wrap_t) (::GtkConstraintLayout* layout, const char** lines, gsize n_lines, gint hspacing, gint vspacing, ::GHashTable* views, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_add_constraints_from_descriptionv;
  auto views_w = unwrap (std::move(views), gi::transfer_none);
  auto views_to_c = views_w;
  auto vspacing_to_c = vspacing;
  auto hspacing_to_c = hspacing;
  auto lines_w = unwrap (std::move(lines), gi::transfer_none);
  auto lines_to_c = lines_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (const char**) (lines_to_c), (gsize) (lines._size()), (gint) (hspacing_to_c), (gint) (vspacing_to_c), (::GHashTable*) (views_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}
gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t> base::ConstraintLayoutBase::add_constraints_from_description (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> lines, gint hspacing, gint vspacing, gi::CollectionParameter<GHashTable, std::pair<char*, ::GtkConstraintTarget*>, gi::transfer_none_t> views, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkConstraintLayout* layout, const char** lines, gsize n_lines, gint hspacing, gint vspacing, ::GHashTable* views, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_add_constraints_from_descriptionv;
  auto views_w = unwrap (std::move(views), gi::transfer_none);
  auto views_to_c = views_w;
  auto vspacing_to_c = vspacing;
  auto hspacing_to_c = hspacing;
  auto lines_w = unwrap (std::move(lines), gi::transfer_none);
  auto lines_to_c = lines_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (const char**) (lines_to_c), (gsize) (lines._size()), (gint) (hspacing_to_c), (gint) (vspacing_to_c), (::GHashTable*) (views_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GtkConstraint*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_constraint_layout_add_guide (GtkConstraintLayout* layout /*none*/, GtkConstraintGuide* guide /*full*/);
// void gtk_constraint_layout_add_guide (::GtkConstraintLayout* layout /*none*/, ::GtkConstraintGuide* guide /*full*/);
void base::ConstraintLayoutBase::add_guide (Gtk::ConstraintGuide guide) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintLayout* layout, ::GtkConstraintGuide* guide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_add_guide;
  auto guide_to_c = gi::unwrap (guide, gi::transfer_full);
  call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (::GtkConstraintGuide*) (guide_to_c));
}

// GListModel* /*full*/ gtk_constraint_layout_observe_constraints (GtkConstraintLayout* layout /*none*/);
// ::GListModel* /*full*/ gtk_constraint_layout_observe_constraints (::GtkConstraintLayout* layout /*none*/);
Gio::ListModel base::ConstraintLayoutBase::observe_constraints () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkConstraintLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_observe_constraints;
  auto _temp_ret = call_wrap_v ((::GtkConstraintLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*full*/ gtk_constraint_layout_observe_guides (GtkConstraintLayout* layout /*none*/);
// ::GListModel* /*full*/ gtk_constraint_layout_observe_guides (::GtkConstraintLayout* layout /*none*/);
Gio::ListModel base::ConstraintLayoutBase::observe_guides () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkConstraintLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_observe_guides;
  auto _temp_ret = call_wrap_v ((::GtkConstraintLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_constraint_layout_remove_all_constraints (GtkConstraintLayout* layout /*none*/);
// void gtk_constraint_layout_remove_all_constraints (::GtkConstraintLayout* layout /*none*/);
void base::ConstraintLayoutBase::remove_all_constraints () noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_remove_all_constraints;
  call_wrap_v ((::GtkConstraintLayout*) (gobj_()));
}

// void gtk_constraint_layout_remove_constraint (GtkConstraintLayout* layout /*none*/, GtkConstraint* constraint /*none*/);
// void gtk_constraint_layout_remove_constraint (::GtkConstraintLayout* layout /*none*/, ::GtkConstraint* constraint /*none*/);
void base::ConstraintLayoutBase::remove_constraint (Gtk::Constraint constraint) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintLayout* layout, ::GtkConstraint* constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_remove_constraint;
  auto constraint_to_c = gi::unwrap (constraint, gi::transfer_none);
  call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (::GtkConstraint*) (constraint_to_c));
}

// void gtk_constraint_layout_remove_guide (GtkConstraintLayout* layout /*none*/, GtkConstraintGuide* guide /*none*/);
// void gtk_constraint_layout_remove_guide (::GtkConstraintLayout* layout /*none*/, ::GtkConstraintGuide* guide /*none*/);
void base::ConstraintLayoutBase::remove_guide (Gtk::ConstraintGuide guide) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintLayout* layout, ::GtkConstraintGuide* guide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_layout_remove_guide;
  auto guide_to_c = gi::unwrap (guide, gi::transfer_none);
  call_wrap_v ((::GtkConstraintLayout*) (gobj_()), (::GtkConstraintGuide*) (guide_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraintlayout_extra_def_impl.hpp>)
#include <gtk/constraintlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraintlayout_extra_impl.hpp>)
#include <gtk/constraintlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ConstraintLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkConstraintLayoutClass *methods = (::GtkConstraintLayoutClass *) class_struct;
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
