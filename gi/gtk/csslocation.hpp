// AUTO-GENERATED

#ifndef _GI_GTK_CSSLOCATION_HPP_
#define _GI_GTK_CSSLOCATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CssLocation_Ref;

class CssLocation;

namespace base {


#define GI_GTK_CSSLOCATION_BASE base::CssLocationBase
class CssLocationBase : public gi::detail::CBoxedWrapperBase<CssLocationBase, ::GtkCssLocation>
{
typedef gi::detail::CBoxedWrapperBase<CssLocationBase, ::GtkCssLocation> super_type;
public:

CssLocationBase (std::nullptr_t = nullptr) : super_type() {}

// gsize CssLocation::bytes (const ::GtkCssLocation* obj /*none*/);
// gsize CssLocation::bytes (const ::GtkCssLocation* obj /*none*/);
GI_INLINE_DECL gsize bytes_ () const noexcept;

//  CssLocation::bytes (::GtkCssLocation* obj /*none*/, gsize _value);
// void CssLocation::bytes (::GtkCssLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void bytes_ (gsize _value) noexcept;

// gsize CssLocation::chars (const ::GtkCssLocation* obj /*none*/);
// gsize CssLocation::chars (const ::GtkCssLocation* obj /*none*/);
GI_INLINE_DECL gsize chars_ () const noexcept;

//  CssLocation::chars (::GtkCssLocation* obj /*none*/, gsize _value);
// void CssLocation::chars (::GtkCssLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void chars_ (gsize _value) noexcept;

// gsize CssLocation::lines (const ::GtkCssLocation* obj /*none*/);
// gsize CssLocation::lines (const ::GtkCssLocation* obj /*none*/);
GI_INLINE_DECL gsize lines_ () const noexcept;

//  CssLocation::lines (::GtkCssLocation* obj /*none*/, gsize _value);
// void CssLocation::lines (::GtkCssLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void lines_ (gsize _value) noexcept;

// gsize CssLocation::line_bytes (const ::GtkCssLocation* obj /*none*/);
// gsize CssLocation::line_bytes (const ::GtkCssLocation* obj /*none*/);
GI_INLINE_DECL gsize line_bytes_ () const noexcept;

//  CssLocation::line_bytes (::GtkCssLocation* obj /*none*/, gsize _value);
// void CssLocation::line_bytes (::GtkCssLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void line_bytes_ (gsize _value) noexcept;

// gsize CssLocation::line_chars (const ::GtkCssLocation* obj /*none*/);
// gsize CssLocation::line_chars (const ::GtkCssLocation* obj /*none*/);
GI_INLINE_DECL gsize line_chars_ () const noexcept;

//  CssLocation::line_chars (::GtkCssLocation* obj /*none*/, gsize _value);
// void CssLocation::line_chars (::GtkCssLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void line_chars_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/csslocation_extra_def.hpp>)
#include <gtk/csslocation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/csslocation_extra.hpp>)
#include <gtk/csslocation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CssLocation_Ref;

class CssLocation : public gi::detail::CBoxedWrapper<CssLocation, ::GtkCssLocation, GI_GTK_CSSLOCATION_BASE, CssLocation_Ref>
{ typedef gi::detail::CBoxedWrapper<CssLocation, ::GtkCssLocation, GI_GTK_CSSLOCATION_BASE, CssLocation_Ref> super_type; using super_type::super_type; };


class CssLocation_Ref : public gi::detail::CBoxedRefWrapper<CssLocation, ::GtkCssLocation, GI_GTK_CSSLOCATION_BASE>
{ typedef gi::detail::CBoxedRefWrapper<CssLocation, ::GtkCssLocation, GI_GTK_CSSLOCATION_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCssLocation>
{ typedef Gtk::CssLocation type; }; 

} // namespace repository

} // namespace gi

#endif
