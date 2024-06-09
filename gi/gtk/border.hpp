// AUTO-GENERATED

#ifndef _GI_GTK_BORDER_HPP_
#define _GI_GTK_BORDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Border_Ref;

class Border;

namespace base {


#define GI_GTK_BORDER_BASE base::BorderBase
class BorderBase : public gi::detail::GBoxedWrapperBase<BorderBase, ::GtkBorder>
{
typedef gi::detail::GBoxedWrapperBase<BorderBase, ::GtkBorder> super_type;
public:

BorderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_border_get_type(); } 

// gint16 Border::left (const ::GtkBorder* obj /*none*/);
// gint16 Border::left (const ::GtkBorder* obj /*none*/);
GI_INLINE_DECL gint16 left_ () const noexcept;

//  Border::left (::GtkBorder* obj /*none*/, gint16 _value);
// void Border::left (::GtkBorder* obj /*none*/, gint16 _value);
GI_INLINE_DECL void left_ (gint16 _value) noexcept;

// gint16 Border::right (const ::GtkBorder* obj /*none*/);
// gint16 Border::right (const ::GtkBorder* obj /*none*/);
GI_INLINE_DECL gint16 right_ () const noexcept;

//  Border::right (::GtkBorder* obj /*none*/, gint16 _value);
// void Border::right (::GtkBorder* obj /*none*/, gint16 _value);
GI_INLINE_DECL void right_ (gint16 _value) noexcept;

// gint16 Border::top (const ::GtkBorder* obj /*none*/);
// gint16 Border::top (const ::GtkBorder* obj /*none*/);
GI_INLINE_DECL gint16 top_ () const noexcept;

//  Border::top (::GtkBorder* obj /*none*/, gint16 _value);
// void Border::top (::GtkBorder* obj /*none*/, gint16 _value);
GI_INLINE_DECL void top_ (gint16 _value) noexcept;

// gint16 Border::bottom (const ::GtkBorder* obj /*none*/);
// gint16 Border::bottom (const ::GtkBorder* obj /*none*/);
GI_INLINE_DECL gint16 bottom_ () const noexcept;

//  Border::bottom (::GtkBorder* obj /*none*/, gint16 _value);
// void Border::bottom (::GtkBorder* obj /*none*/, gint16 _value);
GI_INLINE_DECL void bottom_ (gint16 _value) noexcept;

// GtkBorder* /*full*/ gtk_border_new ();
// ::GtkBorder* /*full*/ gtk_border_new ();
static GI_INLINE_DECL Gtk::Border new_ () noexcept;

// GtkBorder* /*full*/ gtk_border_copy (const GtkBorder* border_ /*none*/);
// ::GtkBorder* /*full*/ gtk_border_copy (const ::GtkBorder* border_ /*none*/);
GI_INLINE_DECL Gtk::Border copy () const noexcept;

// void gtk_border_free (GtkBorder* border_ /*none*/);
// void gtk_border_free (::GtkBorder* border_ /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/border_extra_def.hpp>)
#include <gtk/border_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/border_extra.hpp>)
#include <gtk/border_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Border_Ref;

class Border : public gi::detail::GBoxedWrapper<Border, ::GtkBorder, GI_GTK_BORDER_BASE, Border_Ref>
{ typedef gi::detail::GBoxedWrapper<Border, ::GtkBorder, GI_GTK_BORDER_BASE, Border_Ref> super_type; using super_type::super_type; };


class Border_Ref : public gi::detail::GBoxedRefWrapper<Border, ::GtkBorder, GI_GTK_BORDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Border, ::GtkBorder, GI_GTK_BORDER_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBorder>
{ typedef Gtk::Border type; }; 

} // namespace repository

} // namespace gi

#endif
