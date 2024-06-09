// AUTO-GENERATED

#ifndef _GI_GTK_ANYFILTER_HPP_
#define _GI_GTK_ANYFILTER_HPP_

#include "multifilter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class AnyFilter;

namespace base {


#define GI_GTK_ANYFILTER_BASE base::AnyFilterBase
class AnyFilterBase : public Gtk::MultiFilter
{
typedef Gtk::MultiFilter super_type;
public:
typedef ::GtkAnyFilter BaseObjectType;

AnyFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_any_filter_get_type(); } 

// GtkAnyFilter* /*full*/ gtk_any_filter_new ();
// ::GtkAnyFilter* /*full*/ gtk_any_filter_new ();
static GI_INLINE_DECL Gtk::AnyFilter new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/anyfilter_extra_def.hpp>)
#include <gtk/anyfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/anyfilter_extra.hpp>)
#include <gtk/anyfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AnyFilter : public GI_GTK_ANYFILTER_BASE
{ typedef GI_GTK_ANYFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAnyFilter>
{ typedef Gtk::AnyFilter type; }; 

} // namespace repository

} // namespace gi

#endif
