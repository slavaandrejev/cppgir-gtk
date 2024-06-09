// AUTO-GENERATED

#ifndef _GI_GTK_PRINTCONTEXT_HPP_
#define _GI_GTK_PRINTCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;

class PrintContext;

namespace base {


#define GI_GTK_PRINTCONTEXT_BASE base::PrintContextBase
class PrintContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintContext BaseObjectType;

PrintContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_context_get_type(); } 

// PangoContext* /*full*/ gtk_print_context_create_pango_context (GtkPrintContext* context /*none*/);
// ::PangoContext* /*full*/ gtk_print_context_create_pango_context (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL Pango::Context create_pango_context () noexcept;

// PangoLayout* /*full*/ gtk_print_context_create_pango_layout (GtkPrintContext* context /*none*/);
// ::PangoLayout* /*full*/ gtk_print_context_create_pango_layout (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL Pango::Layout create_pango_layout () noexcept;

// cairo_t* /*none*/ gtk_print_context_get_cairo_context (GtkPrintContext* context /*none*/);
// ::cairo_t* /*none*/ gtk_print_context_get_cairo_context (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL cairo::Context_Ref get_cairo_context () noexcept;

// double gtk_print_context_get_dpi_x (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_dpi_x (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL gdouble get_dpi_x () noexcept;

// double gtk_print_context_get_dpi_y (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_dpi_y (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL gdouble get_dpi_y () noexcept;

// gboolean gtk_print_context_get_hard_margins (GtkPrintContext* context /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_print_context_get_hard_margins (::GtkPrintContext* context /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
GI_INLINE_DECL bool get_hard_margins (gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, gdouble, gdouble> get_hard_margins () noexcept;

// double gtk_print_context_get_height (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_height (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL gdouble get_height () noexcept;

// GtkPageSetup* /*none*/ gtk_print_context_get_page_setup (GtkPrintContext* context /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_context_get_page_setup (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// PangoFontMap* /*none*/ gtk_print_context_get_pango_fontmap (GtkPrintContext* context /*none*/);
// ::PangoFontMap* /*none*/ gtk_print_context_get_pango_fontmap (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL Pango::FontMap get_pango_fontmap () noexcept;

// double gtk_print_context_get_width (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_width (::GtkPrintContext* context /*none*/);
GI_INLINE_DECL gdouble get_width () noexcept;

// void gtk_print_context_set_cairo_context (GtkPrintContext* context /*none*/, cairo_t* cr /*none*/, double dpi_x, double dpi_y);
// void gtk_print_context_set_cairo_context (::GtkPrintContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble dpi_x, gdouble dpi_y);
GI_INLINE_DECL void set_cairo_context (cairo::Context_Ref cr, gdouble dpi_x, gdouble dpi_y) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra_def.hpp>)
#include <gtk/printcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra.hpp>)
#include <gtk/printcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintContext : public GI_GTK_PRINTCONTEXT_BASE
{ typedef GI_GTK_PRINTCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintContext>
{ typedef Gtk::PrintContext type; }; 

} // namespace repository

} // namespace gi

#endif
