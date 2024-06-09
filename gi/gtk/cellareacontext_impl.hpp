// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREACONTEXT_IMPL_HPP_
#define _GI_GTK_CELLAREACONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_area_context_allocate (GtkCellAreaContext* context /*none*/, int width, int height);
// void gtk_cell_area_context_allocate (::GtkCellAreaContext* context /*none*/, gint width, gint height);
void base::CellAreaContextBase::allocate (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_allocate;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_cell_area_context_get_allocation (GtkCellAreaContext* context /*none*/, int* width, int* height);
// void gtk_cell_area_context_get_allocation (::GtkCellAreaContext* context /*none*/, gint* width, gint* height);
void base::CellAreaContextBase::get_allocation (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_allocation;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_allocation () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_allocation;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkCellArea* /*none*/ gtk_cell_area_context_get_area (GtkCellAreaContext* context /*none*/);
// ::GtkCellArea* /*none*/ gtk_cell_area_context_get_area (::GtkCellAreaContext* context /*none*/);
Gtk::CellArea base::CellAreaContextBase::get_area () noexcept
{
  typedef ::GtkCellArea* (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_area;
  auto _temp_ret = call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_cell_area_context_get_preferred_height (GtkCellAreaContext* context /*none*/, int* minimum_height, int* natural_height);
// void gtk_cell_area_context_get_preferred_height (::GtkCellAreaContext* context /*none*/, gint* minimum_height, gint* natural_height);
void base::CellAreaContextBase::get_preferred_height (gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_height () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  auto &&tmp_return_1 = minimum_height_o;
  auto &&tmp_return_2 = natural_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_context_get_preferred_height_for_width (GtkCellAreaContext* context /*none*/, int width, int* minimum_height, int* natural_height);
// void gtk_cell_area_context_get_preferred_height_for_width (::GtkCellAreaContext* context /*none*/, gint width, gint* minimum_height, gint* natural_height);
void base::CellAreaContextBase::get_preferred_height_for_width (gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_height_for_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  auto &&tmp_return_1 = minimum_height_o;
  auto &&tmp_return_2 = natural_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_context_get_preferred_width (GtkCellAreaContext* context /*none*/, int* minimum_width, int* natural_width);
// void gtk_cell_area_context_get_preferred_width (::GtkCellAreaContext* context /*none*/, gint* minimum_width, gint* natural_width);
void base::CellAreaContextBase::get_preferred_width (gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_width () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  auto &&tmp_return_1 = minimum_width_o;
  auto &&tmp_return_2 = natural_width_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_context_get_preferred_width_for_height (GtkCellAreaContext* context /*none*/, int height, int* minimum_width, int* natural_width);
// void gtk_cell_area_context_get_preferred_width_for_height (::GtkCellAreaContext* context /*none*/, gint height, gint* minimum_width, gint* natural_width);
void base::CellAreaContextBase::get_preferred_width_for_height (gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_width_for_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  auto &&tmp_return_1 = minimum_width_o;
  auto &&tmp_return_2 = natural_width_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_context_push_preferred_height (GtkCellAreaContext* context /*none*/, int minimum_height, int natural_height);
// void gtk_cell_area_context_push_preferred_height (::GtkCellAreaContext* context /*none*/, gint minimum_height, gint natural_height);
void base::CellAreaContextBase::push_preferred_height (gint minimum_height, gint natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint minimum_height, gint natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_push_preferred_height;
  auto natural_height_to_c = natural_height;
  auto minimum_height_to_c = minimum_height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (minimum_height_to_c), (gint) (natural_height_to_c));
}

// void gtk_cell_area_context_push_preferred_width (GtkCellAreaContext* context /*none*/, int minimum_width, int natural_width);
// void gtk_cell_area_context_push_preferred_width (::GtkCellAreaContext* context /*none*/, gint minimum_width, gint natural_width);
void base::CellAreaContextBase::push_preferred_width (gint minimum_width, gint natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint minimum_width, gint natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_push_preferred_width;
  auto natural_width_to_c = natural_width;
  auto minimum_width_to_c = minimum_width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (minimum_width_to_c), (gint) (natural_width_to_c));
}

// void gtk_cell_area_context_reset (GtkCellAreaContext* context /*none*/);
// void gtk_cell_area_context_reset (::GtkCellAreaContext* context /*none*/);
void base::CellAreaContextBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_context_reset;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra_def_impl.hpp>)
#include <gtk/cellareacontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra_impl.hpp>)
#include <gtk/cellareacontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAreaContextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCellAreaContextClass *methods = (::GtkCellAreaContextClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.allocate) methods->allocate = (decltype (methods->allocate)) detail::method_wrapper<self, void (*) (gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::allocate_>;
  if (init_data.get_preferred_height_for_width) methods->get_preferred_height_for_width = (decltype (methods->get_preferred_height_for_width)) detail::method_wrapper<self, void (*) (gint width, gint & minimum_height, gint & natural_height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_height_for_width_>;
  if (init_data.get_preferred_width_for_height) methods->get_preferred_width_for_height = (decltype (methods->get_preferred_width_for_height)) detail::method_wrapper<self, void (*) (gint height, gint & minimum_width, gint & natural_width), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_width_for_height_>;
  if (init_data.reset) methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::reset_>;
}

// void CellAreaContext::allocate (GtkCellAreaContext* context /*none*/, int width, int height);
// void CellAreaContext::allocate (::GtkCellAreaContext* context /*none*/, gint width, gint height);
void CellAreaContextClass::allocate_ (gint width, gint height) noexcept
{
  if (!get_struct_()->allocate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->allocate;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void CellAreaContext::get_preferred_height_for_width (GtkCellAreaContext* context /*none*/, int width, int* minimum_height, int* natural_height);
// void CellAreaContext::get_preferred_height_for_width (::GtkCellAreaContext* context /*none*/, gint width, gint* minimum_height, gint* natural_height);
void CellAreaContextClass::get_preferred_height_for_width_ (gint width, gint & minimum_height, gint & natural_height) noexcept
{
  if (!get_struct_()->get_preferred_height_for_width) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  natural_height = natural_height_o;
  minimum_height = minimum_height_o;
}

// void CellAreaContext::get_preferred_width_for_height (GtkCellAreaContext* context /*none*/, int height, int* minimum_width, int* natural_width);
// void CellAreaContext::get_preferred_width_for_height (::GtkCellAreaContext* context /*none*/, gint height, gint* minimum_width, gint* natural_width);
void CellAreaContextClass::get_preferred_width_for_height_ (gint height, gint & minimum_width, gint & natural_width) noexcept
{
  if (!get_struct_()->get_preferred_width_for_height) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  natural_width = natural_width_o;
  minimum_width = minimum_width_o;
}

// void CellAreaContext::reset (GtkCellAreaContext* context /*none*/);
// void CellAreaContext::reset (::GtkCellAreaContext* context /*none*/);
void CellAreaContextClass::reset_ () noexcept
{
  if (!get_struct_()->reset) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
