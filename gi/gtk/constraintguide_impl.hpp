// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTGUIDE_IMPL_HPP_
#define _GI_GTK_CONSTRAINTGUIDE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ConstraintTarget ConstraintGuideBase::interface_ (gi::interface_tag<Gtk::ConstraintTarget>)
{ return gi::wrap ((Gtk::ConstraintTarget::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ConstraintGuideBase::operator Gtk::ConstraintTarget ()
{ return interface_ (gi::interface_tag<Gtk::ConstraintTarget>()); }

// GtkConstraintGuide* /*full*/ gtk_constraint_guide_new ();
// ::GtkConstraintGuide* /*full*/ gtk_constraint_guide_new ();
Gtk::ConstraintGuide base::ConstraintGuideBase::new_ () noexcept
{
  typedef ::GtkConstraintGuide* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_constraint_guide_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_constraint_guide_get_max_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_max_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
void base::ConstraintGuideBase::get_max_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_max_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::ConstraintGuideBase::get_max_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_max_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_constraint_guide_get_min_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_min_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
void base::ConstraintGuideBase::get_min_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_min_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::ConstraintGuideBase::get_min_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_min_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* /*none,nullable*/ gtk_constraint_guide_get_name (GtkConstraintGuide* guide /*none*/);
// const char* /*none,nullable*/ gtk_constraint_guide_get_name (::GtkConstraintGuide* guide /*none*/);
gi::cstring_v base::ConstraintGuideBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkConstraintGuide* guide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_name;
  auto _temp_ret = call_wrap_v ((::GtkConstraintGuide*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_constraint_guide_get_nat_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_nat_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
void base::ConstraintGuideBase::get_nat_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_nat_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::ConstraintGuideBase::get_nat_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_nat_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkConstraintStrength gtk_constraint_guide_get_strength (GtkConstraintGuide* guide /*none*/);
// ::GtkConstraintStrength gtk_constraint_guide_get_strength (::GtkConstraintGuide* guide /*none*/);
Gtk::ConstraintStrength base::ConstraintGuideBase::get_strength () noexcept
{
  typedef ::GtkConstraintStrength (*call_wrap_t) (::GtkConstraintGuide* guide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_get_strength;
  auto _temp_ret = call_wrap_v ((::GtkConstraintGuide*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_constraint_guide_set_max_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_max_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
void base::ConstraintGuideBase::set_max_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_max_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_constraint_guide_set_min_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_min_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
void base::ConstraintGuideBase::set_min_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_min_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_constraint_guide_set_name (GtkConstraintGuide* guide /*none*/, const char* name /*none,nullable*/);
// void gtk_constraint_guide_set_name (::GtkConstraintGuide* guide /*none*/, const char* name /*none,nullable*/);
void base::ConstraintGuideBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (const char*) (name_to_c));
}
void base::ConstraintGuideBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_constraint_guide_set_nat_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_nat_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
void base::ConstraintGuideBase::set_nat_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_nat_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_constraint_guide_set_strength (GtkConstraintGuide* guide /*none*/, GtkConstraintStrength strength);
// void gtk_constraint_guide_set_strength (::GtkConstraintGuide* guide /*none*/, ::GtkConstraintStrength strength);
void base::ConstraintGuideBase::set_strength (Gtk::ConstraintStrength strength) noexcept
{
  typedef void (*call_wrap_t) (::GtkConstraintGuide* guide, ::GtkConstraintStrength strength);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_guide_set_strength;
  auto strength_to_c = gi::unwrap (strength);
  call_wrap_v ((::GtkConstraintGuide*) (gobj_()), (::GtkConstraintStrength) (strength_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraintguide_extra_def_impl.hpp>)
#include <gtk/constraintguide_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraintguide_extra_impl.hpp>)
#include <gtk/constraintguide_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ConstraintGuideClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkConstraintGuideClass *methods = (::GtkConstraintGuideClass *) class_struct;
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
