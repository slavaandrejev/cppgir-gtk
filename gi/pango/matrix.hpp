// AUTO-GENERATED

#ifndef _GI_PANGO_MATRIX_HPP_
#define _GI_PANGO_MATRIX_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Matrix_Ref;
class Rectangle;
class Rectangle_Ref;

class Matrix;

namespace base {


#define GI_PANGO_MATRIX_BASE base::MatrixBase
class MatrixBase : public gi::detail::GBoxedWrapperBase<MatrixBase, ::PangoMatrix>
{
typedef gi::detail::GBoxedWrapperBase<MatrixBase, ::PangoMatrix> super_type;
public:

MatrixBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_matrix_get_type(); } 

// gdouble Matrix::xx (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::xx (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble xx_ () const noexcept;

//  Matrix::xx (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::xx (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void xx_ (gdouble _value) noexcept;

// gdouble Matrix::xy (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::xy (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble xy_ () const noexcept;

//  Matrix::xy (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::xy (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void xy_ (gdouble _value) noexcept;

// gdouble Matrix::yx (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::yx (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble yx_ () const noexcept;

//  Matrix::yx (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::yx (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void yx_ (gdouble _value) noexcept;

// gdouble Matrix::yy (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::yy (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble yy_ () const noexcept;

//  Matrix::yy (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::yy (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void yy_ (gdouble _value) noexcept;

// gdouble Matrix::x0 (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::x0 (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble x0_ () const noexcept;

//  Matrix::x0 (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::x0 (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void x0_ (gdouble _value) noexcept;

// gdouble Matrix::y0 (const ::PangoMatrix* obj /*none*/);
// gdouble Matrix::y0 (const ::PangoMatrix* obj /*none*/);
GI_INLINE_DECL gdouble y0_ () const noexcept;

//  Matrix::y0 (::PangoMatrix* obj /*none*/, gdouble _value);
// void Matrix::y0 (::PangoMatrix* obj /*none*/, gdouble _value);
GI_INLINE_DECL void y0_ (gdouble _value) noexcept;

// void pango_matrix_concat (PangoMatrix* matrix /*none*/, const PangoMatrix* new_matrix /*none*/);
// void pango_matrix_concat (::PangoMatrix* matrix /*none*/, const ::PangoMatrix* new_matrix /*none*/);
GI_INLINE_DECL void concat (const Pango::Matrix_Ref new_matrix) noexcept;

// PangoMatrix* /*full,nullable*/ pango_matrix_copy (const PangoMatrix* matrix /*none,nullable*/);
// ::PangoMatrix* /*full,nullable*/ pango_matrix_copy (const ::PangoMatrix* matrix /*none,nullable*/);
GI_INLINE_DECL Pango::Matrix copy () const noexcept;

// void pango_matrix_free (PangoMatrix* matrix /*none,nullable*/);
// void pango_matrix_free (::PangoMatrix* matrix /*none,nullable*/);
// IGNORE; marked ignore

// double pango_matrix_get_font_scale_factor (const PangoMatrix* matrix /*none,nullable*/);
// gdouble pango_matrix_get_font_scale_factor (const ::PangoMatrix* matrix /*none,nullable*/);
GI_INLINE_DECL gdouble get_font_scale_factor () const noexcept;

// void pango_matrix_get_font_scale_factors (const PangoMatrix* matrix /*none,nullable*/, double* xscale, double* yscale);
// void pango_matrix_get_font_scale_factors (const ::PangoMatrix* matrix /*none,nullable*/, gdouble* xscale, gdouble* yscale);
GI_INLINE_DECL void get_font_scale_factors (gdouble * xscale, gdouble * yscale) const noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_font_scale_factors () const noexcept;

// double pango_matrix_get_slant_ratio (const PangoMatrix* matrix /*none*/);
// gdouble pango_matrix_get_slant_ratio (const ::PangoMatrix* matrix /*none*/);
GI_INLINE_DECL gdouble get_slant_ratio () const noexcept;

// void pango_matrix_rotate (PangoMatrix* matrix /*none*/, double degrees);
// void pango_matrix_rotate (::PangoMatrix* matrix /*none*/, gdouble degrees);
GI_INLINE_DECL void rotate (gdouble degrees) noexcept;

// void pango_matrix_scale (PangoMatrix* matrix /*none*/, double scale_x, double scale_y);
// void pango_matrix_scale (::PangoMatrix* matrix /*none*/, gdouble scale_x, gdouble scale_y);
GI_INLINE_DECL void scale (gdouble scale_x, gdouble scale_y) noexcept;

// void pango_matrix_transform_distance (const PangoMatrix* matrix /*none,nullable*/, double* dx, double* dy);
// void pango_matrix_transform_distance (const ::PangoMatrix* matrix /*none,nullable*/, gdouble* dx, gdouble* dy);
GI_INLINE_DECL void transform_distance (gdouble & dx, gdouble & dy) const noexcept;

// void pango_matrix_transform_pixel_rectangle (const PangoMatrix* matrix /*none,nullable*/, PangoRectangle* rect /*full,inout,opt*/);
// void pango_matrix_transform_pixel_rectangle (const ::PangoMatrix* matrix /*none,nullable*/, ::PangoRectangle** rect /*full,inout,opt*/);
// SKIP; inconsistent rect inout pointer depth (1 vs 2)

// void pango_matrix_transform_point (const PangoMatrix* matrix /*none,nullable*/, double* x, double* y);
// void pango_matrix_transform_point (const ::PangoMatrix* matrix /*none,nullable*/, gdouble* x, gdouble* y);
GI_INLINE_DECL void transform_point (gdouble & x, gdouble & y) const noexcept;

// void pango_matrix_transform_rectangle (const PangoMatrix* matrix /*none,nullable*/, PangoRectangle* rect /*full,inout,opt*/);
// void pango_matrix_transform_rectangle (const ::PangoMatrix* matrix /*none,nullable*/, ::PangoRectangle** rect /*full,inout,opt*/);
// SKIP; inconsistent rect inout pointer depth (1 vs 2)

// void pango_matrix_translate (PangoMatrix* matrix /*none*/, double tx, double ty);
// void pango_matrix_translate (::PangoMatrix* matrix /*none*/, gdouble tx, gdouble ty);
GI_INLINE_DECL void translate (gdouble tx, gdouble ty) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/matrix_extra_def.hpp>)
#include <pango/matrix_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/matrix_extra.hpp>)
#include <pango/matrix_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Matrix_Ref;

class Matrix : public gi::detail::GBoxedWrapper<Matrix, ::PangoMatrix, GI_PANGO_MATRIX_BASE, Matrix_Ref>
{ typedef gi::detail::GBoxedWrapper<Matrix, ::PangoMatrix, GI_PANGO_MATRIX_BASE, Matrix_Ref> super_type; using super_type::super_type; };


class Matrix_Ref : public gi::detail::GBoxedRefWrapper<Matrix, ::PangoMatrix, GI_PANGO_MATRIX_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Matrix, ::PangoMatrix, GI_PANGO_MATRIX_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoMatrix>
{ typedef Pango::Matrix type; }; 

} // namespace repository

} // namespace gi

#endif
