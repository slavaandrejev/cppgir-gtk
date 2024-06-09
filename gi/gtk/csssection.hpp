// AUTO-GENERATED

#ifndef _GI_GTK_CSSSECTION_HPP_
#define _GI_GTK_CSSSECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CssLocation;
class CssLocation_Ref;
class CssSection_Ref;

class CssSection;

namespace base {


#define GI_GTK_CSSSECTION_BASE base::CssSectionBase
class CssSectionBase : public gi::detail::GBoxedWrapperBase<CssSectionBase, ::GtkCssSection>
{
typedef gi::detail::GBoxedWrapperBase<CssSectionBase, ::GtkCssSection> super_type;
public:

CssSectionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_css_section_get_type(); } 

// GtkCssSection* /*full*/ gtk_css_section_new (GFile* file /*none,nullable*/, const GtkCssLocation* start /*none*/, const GtkCssLocation* end /*none*/);
// ::GtkCssSection* /*full*/ gtk_css_section_new (::GFile* file /*none,nullable*/, const ::GtkCssLocation* start /*none*/, const ::GtkCssLocation* end /*none*/);
static GI_INLINE_DECL Gtk::CssSection new_ (Gio::File file, const Gtk::CssLocation_Ref start, const Gtk::CssLocation_Ref end) noexcept;
static GI_INLINE_DECL Gtk::CssSection new_ (const Gtk::CssLocation_Ref start, const Gtk::CssLocation_Ref end) noexcept;

// const GtkCssLocation* /*none*/ gtk_css_section_get_end_location (const GtkCssSection* section /*none*/);
// const ::GtkCssLocation* /*none*/ gtk_css_section_get_end_location (const ::GtkCssSection* section /*none*/);
GI_INLINE_DECL Gtk::CssLocation_Ref get_end_location () const noexcept;

// GFile* /*none,nullable*/ gtk_css_section_get_file (const GtkCssSection* section /*none*/);
// ::GFile* /*none,nullable*/ gtk_css_section_get_file (const ::GtkCssSection* section /*none*/);
GI_INLINE_DECL Gio::File get_file () const noexcept;

// GtkCssSection* /*none,nullable*/ gtk_css_section_get_parent (const GtkCssSection* section /*none*/);
// ::GtkCssSection* /*none,nullable*/ gtk_css_section_get_parent (const ::GtkCssSection* section /*none*/);
GI_INLINE_DECL Gtk::CssSection_Ref get_parent () const noexcept;

// const GtkCssLocation* /*none*/ gtk_css_section_get_start_location (const GtkCssSection* section /*none*/);
// const ::GtkCssLocation* /*none*/ gtk_css_section_get_start_location (const ::GtkCssSection* section /*none*/);
GI_INLINE_DECL Gtk::CssLocation_Ref get_start_location () const noexcept;

// void gtk_css_section_print (const GtkCssSection* section /*none*/, GString* string /*none*/);
// void gtk_css_section_print (const ::GtkCssSection* section /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) const noexcept;

// GtkCssSection* /*full*/ gtk_css_section_ref (GtkCssSection* section /*none*/);
// ::GtkCssSection* /*full*/ gtk_css_section_ref (::GtkCssSection* section /*none*/);
// IGNORE; marked ignore

// char* /*full*/ gtk_css_section_to_string (const GtkCssSection* section /*none*/);
// char* /*full*/ gtk_css_section_to_string (const ::GtkCssSection* section /*none*/);
GI_INLINE_DECL gi::cstring to_string () const noexcept;

// void gtk_css_section_unref (GtkCssSection* section /*full*/);
// void gtk_css_section_unref (::GtkCssSection* section /*full*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_def.hpp>)
#include <gtk/csssection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra.hpp>)
#include <gtk/csssection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CssSection_Ref;

class CssSection : public gi::detail::GBoxedWrapper<CssSection, ::GtkCssSection, GI_GTK_CSSSECTION_BASE, CssSection_Ref>
{ typedef gi::detail::GBoxedWrapper<CssSection, ::GtkCssSection, GI_GTK_CSSSECTION_BASE, CssSection_Ref> super_type; using super_type::super_type; };


class CssSection_Ref : public gi::detail::GBoxedRefWrapper<CssSection, ::GtkCssSection, GI_GTK_CSSSECTION_BASE>
{ typedef gi::detail::GBoxedRefWrapper<CssSection, ::GtkCssSection, GI_GTK_CSSSECTION_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCssSection>
{ typedef Gtk::CssSection type; }; 

} // namespace repository

} // namespace gi

#endif
