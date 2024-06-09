// AUTO-GENERATED

#ifndef _GI_PANGO_TABARRAY_HPP_
#define _GI_PANGO_TABARRAY_HPP_


namespace gi {

namespace repository {

namespace Pango {

class TabArray_Ref;

class TabArray;

namespace base {


#define GI_PANGO_TABARRAY_BASE base::TabArrayBase
class TabArrayBase : public gi::detail::GBoxedWrapperBase<TabArrayBase, ::PangoTabArray>
{
typedef gi::detail::GBoxedWrapperBase<TabArrayBase, ::PangoTabArray> super_type;
public:

TabArrayBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_tab_array_get_type(); } 

// PangoTabArray* /*full*/ pango_tab_array_new (gint initial_size, gboolean positions_in_pixels);
// ::PangoTabArray* /*full*/ pango_tab_array_new (gint initial_size, gboolean positions_in_pixels);
static GI_INLINE_DECL Pango::TabArray new_ (gint initial_size, gboolean positions_in_pixels) noexcept;

// PangoTabArray* /*full*/ pango_tab_array_new_with_positions (gint size, gboolean positions_in_pixels, PangoTabAlign first_alignment, gint first_position,  ..._ /*none*/);
// ::PangoTabArray* /*full*/ pango_tab_array_new_with_positions (gint size, gboolean positions_in_pixels, ::PangoTabAlign first_alignment, gint first_position,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// PangoTabArray* /*full*/ pango_tab_array_copy (PangoTabArray* src /*none*/);
// ::PangoTabArray* /*full*/ pango_tab_array_copy (::PangoTabArray* src /*none*/);
GI_INLINE_DECL Pango::TabArray copy () noexcept;

// void pango_tab_array_free (PangoTabArray* tab_array /*none*/);
// void pango_tab_array_free (::PangoTabArray* tab_array /*none*/);
// IGNORE; marked ignore

// gunichar pango_tab_array_get_decimal_point (PangoTabArray* tab_array /*none*/, int tab_index);
// gunichar pango_tab_array_get_decimal_point (::PangoTabArray* tab_array /*none*/, gint tab_index);
GI_INLINE_DECL gunichar get_decimal_point (gint tab_index) noexcept;

// gboolean pango_tab_array_get_positions_in_pixels (PangoTabArray* tab_array /*none*/);
// gboolean pango_tab_array_get_positions_in_pixels (::PangoTabArray* tab_array /*none*/);
GI_INLINE_DECL bool get_positions_in_pixels () noexcept;

// gint pango_tab_array_get_size (PangoTabArray* tab_array /*none*/);
// gint pango_tab_array_get_size (::PangoTabArray* tab_array /*none*/);
GI_INLINE_DECL gint get_size () noexcept;

// void pango_tab_array_get_tab (PangoTabArray* tab_array /*none*/, gint tab_index, PangoTabAlign* alignment, gint* location);
// void pango_tab_array_get_tab (::PangoTabArray* tab_array /*none*/, gint tab_index, ::PangoTabAlign* alignment, gint* location);
GI_INLINE_DECL void get_tab (gint tab_index, Pango::TabAlign * alignment, gint * location) noexcept;
GI_INLINE_DECL std::tuple<Pango::TabAlign, gint> get_tab (gint tab_index) noexcept;

// void pango_tab_array_get_tabs (PangoTabArray* tab_array /*none*/, PangoTabAlign** alignments,  locations /*full,out,opt*/);
// void pango_tab_array_get_tabs (::PangoTabArray* tab_array /*none*/, ::PangoTabAlign* alignments, ** locations /*full,out,opt*/);
// SKIP; inconsistent array info

// void pango_tab_array_resize (PangoTabArray* tab_array /*none*/, gint new_size);
// void pango_tab_array_resize (::PangoTabArray* tab_array /*none*/, gint new_size);
GI_INLINE_DECL void resize (gint new_size) noexcept;

// void pango_tab_array_set_decimal_point (PangoTabArray* tab_array /*none*/, int tab_index, gunichar decimal_point);
// void pango_tab_array_set_decimal_point (::PangoTabArray* tab_array /*none*/, gint tab_index, gunichar decimal_point);
GI_INLINE_DECL void set_decimal_point (gint tab_index, gunichar decimal_point) noexcept;

// void pango_tab_array_set_positions_in_pixels (PangoTabArray* tab_array /*none*/, gboolean positions_in_pixels);
// void pango_tab_array_set_positions_in_pixels (::PangoTabArray* tab_array /*none*/, gboolean positions_in_pixels);
GI_INLINE_DECL void set_positions_in_pixels (gboolean positions_in_pixels) noexcept;

// void pango_tab_array_set_tab (PangoTabArray* tab_array /*none*/, gint tab_index, PangoTabAlign alignment, gint location);
// void pango_tab_array_set_tab (::PangoTabArray* tab_array /*none*/, gint tab_index, ::PangoTabAlign alignment, gint location);
GI_INLINE_DECL void set_tab (gint tab_index, Pango::TabAlign alignment, gint location) noexcept;

// void pango_tab_array_sort (PangoTabArray* tab_array /*none*/);
// void pango_tab_array_sort (::PangoTabArray* tab_array /*none*/);
GI_INLINE_DECL void sort () noexcept;

// char* /*full*/ pango_tab_array_to_string (PangoTabArray* tab_array /*none*/);
// char* /*full*/ pango_tab_array_to_string (::PangoTabArray* tab_array /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// PangoTabArray* /*full,nullable*/ pango_tab_array_from_string (const char* text /*none*/);
// ::PangoTabArray* /*full,nullable*/ pango_tab_array_from_string (const char* text /*none*/);
static GI_INLINE_DECL Pango::TabArray from_string (const gi::cstring_v text) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/tabarray_extra_def.hpp>)
#include <pango/tabarray_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/tabarray_extra.hpp>)
#include <pango/tabarray_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class TabArray_Ref;

class TabArray : public gi::detail::GBoxedWrapper<TabArray, ::PangoTabArray, GI_PANGO_TABARRAY_BASE, TabArray_Ref>
{ typedef gi::detail::GBoxedWrapper<TabArray, ::PangoTabArray, GI_PANGO_TABARRAY_BASE, TabArray_Ref> super_type; using super_type::super_type; };


class TabArray_Ref : public gi::detail::GBoxedRefWrapper<TabArray, ::PangoTabArray, GI_PANGO_TABARRAY_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TabArray, ::PangoTabArray, GI_PANGO_TABARRAY_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoTabArray>
{ typedef Pango::TabArray type; }; 

} // namespace repository

} // namespace gi

#endif
