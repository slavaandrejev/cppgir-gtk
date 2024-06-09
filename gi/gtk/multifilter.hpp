// AUTO-GENERATED

#ifndef _GI_GTK_MULTIFILTER_HPP_
#define _GI_GTK_MULTIFILTER_HPP_

#include "filter.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class Filter;

class MultiFilter;

namespace base {


#define GI_GTK_MULTIFILTER_BASE base::MultiFilterBase
class MultiFilterBase : public Gtk::Filter
{
typedef Gtk::Filter super_type;
public:
typedef ::GtkMultiFilter BaseObjectType;

MultiFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_multi_filter_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// void gtk_multi_filter_append (GtkMultiFilter* self /*none*/, GtkFilter* filter /*full*/);
// void gtk_multi_filter_append (::GtkMultiFilter* self /*none*/, ::GtkFilter* filter /*full*/);
GI_INLINE_DECL void append (Gtk::Filter filter) noexcept;

// void gtk_multi_filter_remove (GtkMultiFilter* self /*none*/, guint position);
// void gtk_multi_filter_remove (::GtkMultiFilter* self /*none*/, guint position);
GI_INLINE_DECL void remove (guint position) noexcept;

gi::property_proxy<GType, base::MultiFilterBase> property_item_type()
{ return gi::property_proxy<GType, base::MultiFilterBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::MultiFilterBase> property_item_type() const
{ return gi::property_proxy<GType, base::MultiFilterBase> (*this, "item-type"); }

gi::property_proxy<guint, base::MultiFilterBase> property_n_items()
{ return gi::property_proxy<guint, base::MultiFilterBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::MultiFilterBase> property_n_items() const
{ return gi::property_proxy<guint, base::MultiFilterBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multifilter_extra_def.hpp>)
#include <gtk/multifilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multifilter_extra.hpp>)
#include <gtk/multifilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MultiFilter : public GI_GTK_MULTIFILTER_BASE
{ typedef GI_GTK_MULTIFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMultiFilter>
{ typedef Gtk::MultiFilter type; }; 

} // namespace repository

} // namespace gi

#endif
