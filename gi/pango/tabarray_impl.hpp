// AUTO-GENERATED

#ifndef _GI_PANGO_TABARRAY_IMPL_HPP_
#define _GI_PANGO_TABARRAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoTabArray* /*full*/ pango_tab_array_new (gint initial_size, gboolean positions_in_pixels);
// ::PangoTabArray* /*full*/ pango_tab_array_new (gint initial_size, gboolean positions_in_pixels);
Pango::TabArray base::TabArrayBase::new_ (gint initial_size, gboolean positions_in_pixels) noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (gint initial_size, gboolean positions_in_pixels);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_tab_array_new;
  auto positions_in_pixels_to_c = positions_in_pixels;
  auto initial_size_to_c = initial_size;
  auto _temp_ret = call_wrap_v ((gint) (initial_size_to_c), (gboolean) (positions_in_pixels_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoTabArray* /*full*/ pango_tab_array_new_with_positions (gint size, gboolean positions_in_pixels, PangoTabAlign first_alignment, gint first_position,  ..._ /*none*/);
// ::PangoTabArray* /*full*/ pango_tab_array_new_with_positions (gint size, gboolean positions_in_pixels, ::PangoTabAlign first_alignment, gint first_position,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// PangoTabArray* /*full*/ pango_tab_array_copy (PangoTabArray* src /*none*/);
// ::PangoTabArray* /*full*/ pango_tab_array_copy (::PangoTabArray* src /*none*/);
Pango::TabArray base::TabArrayBase::copy () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::PangoTabArray* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_copy;
  auto _temp_ret = call_wrap_v ((::PangoTabArray*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_tab_array_free (PangoTabArray* tab_array /*none*/);
// void pango_tab_array_free (::PangoTabArray* tab_array /*none*/);
// IGNORE; marked ignore

// gunichar pango_tab_array_get_decimal_point (PangoTabArray* tab_array /*none*/, int tab_index);
// gunichar pango_tab_array_get_decimal_point (::PangoTabArray* tab_array /*none*/, gint tab_index);
gunichar base::TabArrayBase::get_decimal_point (gint tab_index) noexcept
{
  typedef gunichar (*call_wrap_t) (::PangoTabArray* tab_array, gint tab_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_get_decimal_point;
  auto tab_index_to_c = tab_index;
  auto _temp_ret = call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (tab_index_to_c));
  return _temp_ret;
}

// gboolean pango_tab_array_get_positions_in_pixels (PangoTabArray* tab_array /*none*/);
// gboolean pango_tab_array_get_positions_in_pixels (::PangoTabArray* tab_array /*none*/);
bool base::TabArrayBase::get_positions_in_pixels () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoTabArray* tab_array);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_get_positions_in_pixels;
  auto _temp_ret = call_wrap_v ((::PangoTabArray*) (gobj_()));
  return _temp_ret;
}

// gint pango_tab_array_get_size (PangoTabArray* tab_array /*none*/);
// gint pango_tab_array_get_size (::PangoTabArray* tab_array /*none*/);
gint base::TabArrayBase::get_size () noexcept
{
  typedef gint (*call_wrap_t) (::PangoTabArray* tab_array);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_get_size;
  auto _temp_ret = call_wrap_v ((::PangoTabArray*) (gobj_()));
  return _temp_ret;
}

// void pango_tab_array_get_tab (PangoTabArray* tab_array /*none*/, gint tab_index, PangoTabAlign* alignment, gint* location);
// void pango_tab_array_get_tab (::PangoTabArray* tab_array /*none*/, gint tab_index, ::PangoTabAlign* alignment, gint* location);
void base::TabArrayBase::get_tab (gint tab_index, Pango::TabAlign * alignment, gint * location) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gint tab_index, ::PangoTabAlign* alignment, gint* location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_get_tab;
  gint location_o {};
  ::PangoTabAlign alignment_o {};
  auto tab_index_to_c = tab_index;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (tab_index_to_c), (::PangoTabAlign*) (alignment ? &alignment_o : nullptr), (gint*) (location ? &location_o : nullptr));
  if (location) *location = location_o;
  if (alignment) *alignment = gi::wrap (alignment_o);
}
std::tuple<Pango::TabAlign, gint> base::TabArrayBase::get_tab (gint tab_index) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gint tab_index, ::PangoTabAlign* alignment, gint* location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_get_tab;
  gint location_o {};
  ::PangoTabAlign alignment_o {};
  auto tab_index_to_c = tab_index;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (tab_index_to_c), (::PangoTabAlign*) (&alignment_o), (gint*) (&location_o));
  auto &&tmp_return_1 = gi::wrap (alignment_o);
  auto &&tmp_return_2 = location_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_tab_array_get_tabs (PangoTabArray* tab_array /*none*/, PangoTabAlign** alignments,  locations /*full,out,opt*/);
// void pango_tab_array_get_tabs (::PangoTabArray* tab_array /*none*/, ::PangoTabAlign* alignments, ** locations /*full,out,opt*/);
// SKIP; inconsistent array info

// void pango_tab_array_resize (PangoTabArray* tab_array /*none*/, gint new_size);
// void pango_tab_array_resize (::PangoTabArray* tab_array /*none*/, gint new_size);
void base::TabArrayBase::resize (gint new_size) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gint new_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_resize;
  auto new_size_to_c = new_size;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (new_size_to_c));
}

// void pango_tab_array_set_decimal_point (PangoTabArray* tab_array /*none*/, int tab_index, gunichar decimal_point);
// void pango_tab_array_set_decimal_point (::PangoTabArray* tab_array /*none*/, gint tab_index, gunichar decimal_point);
void base::TabArrayBase::set_decimal_point (gint tab_index, gunichar decimal_point) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gint tab_index, gunichar decimal_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_set_decimal_point;
  auto decimal_point_to_c = decimal_point;
  auto tab_index_to_c = tab_index;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (tab_index_to_c), (gunichar) (decimal_point_to_c));
}

// void pango_tab_array_set_positions_in_pixels (PangoTabArray* tab_array /*none*/, gboolean positions_in_pixels);
// void pango_tab_array_set_positions_in_pixels (::PangoTabArray* tab_array /*none*/, gboolean positions_in_pixels);
void base::TabArrayBase::set_positions_in_pixels (gboolean positions_in_pixels) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gboolean positions_in_pixels);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_set_positions_in_pixels;
  auto positions_in_pixels_to_c = positions_in_pixels;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gboolean) (positions_in_pixels_to_c));
}

// void pango_tab_array_set_tab (PangoTabArray* tab_array /*none*/, gint tab_index, PangoTabAlign alignment, gint location);
// void pango_tab_array_set_tab (::PangoTabArray* tab_array /*none*/, gint tab_index, ::PangoTabAlign alignment, gint location);
void base::TabArrayBase::set_tab (gint tab_index, Pango::TabAlign alignment, gint location) noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array, gint tab_index, ::PangoTabAlign alignment, gint location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_set_tab;
  auto location_to_c = location;
  auto alignment_to_c = gi::unwrap (alignment);
  auto tab_index_to_c = tab_index;
  call_wrap_v ((::PangoTabArray*) (gobj_()), (gint) (tab_index_to_c), (::PangoTabAlign) (alignment_to_c), (gint) (location_to_c));
}

// void pango_tab_array_sort (PangoTabArray* tab_array /*none*/);
// void pango_tab_array_sort (::PangoTabArray* tab_array /*none*/);
void base::TabArrayBase::sort () noexcept
{
  typedef void (*call_wrap_t) (::PangoTabArray* tab_array);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_sort;
  call_wrap_v ((::PangoTabArray*) (gobj_()));
}

// char* /*full*/ pango_tab_array_to_string (PangoTabArray* tab_array /*none*/);
// char* /*full*/ pango_tab_array_to_string (::PangoTabArray* tab_array /*none*/);
gi::cstring base::TabArrayBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::PangoTabArray* tab_array);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_to_string;
  auto _temp_ret = call_wrap_v ((::PangoTabArray*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoTabArray* /*full,nullable*/ pango_tab_array_from_string (const char* text /*none*/);
// ::PangoTabArray* /*full,nullable*/ pango_tab_array_from_string (const char* text /*none*/);
Pango::TabArray base::TabArrayBase::from_string (const gi::cstring_v text) noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_tab_array_from_string;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/tabarray_extra_def_impl.hpp>)
#include <pango/tabarray_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/tabarray_extra_impl.hpp>)
#include <pango/tabarray_extra_impl.hpp>
#endif
#endif

#endif
