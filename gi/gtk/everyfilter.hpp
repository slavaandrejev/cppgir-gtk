// AUTO-GENERATED

#ifndef _GI_GTK_EVERYFILTER_HPP_
#define _GI_GTK_EVERYFILTER_HPP_

#include "multifilter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EveryFilter;

namespace base {


#define GI_GTK_EVERYFILTER_BASE base::EveryFilterBase
class EveryFilterBase : public Gtk::MultiFilter
{
typedef Gtk::MultiFilter super_type;
public:
typedef ::GtkEveryFilter BaseObjectType;

EveryFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_every_filter_get_type(); } 

// GtkEveryFilter* /*full*/ gtk_every_filter_new ();
// ::GtkEveryFilter* /*full*/ gtk_every_filter_new ();
static GI_INLINE_DECL Gtk::EveryFilter new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/everyfilter_extra_def.hpp>)
#include <gtk/everyfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/everyfilter_extra.hpp>)
#include <gtk/everyfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EveryFilter : public GI_GTK_EVERYFILTER_BASE
{ typedef GI_GTK_EVERYFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEveryFilter>
{ typedef Gtk::EveryFilter type; }; 

} // namespace repository

} // namespace gi

#endif
