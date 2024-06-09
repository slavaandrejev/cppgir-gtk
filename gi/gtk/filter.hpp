// AUTO-GENERATED

#ifndef _GI_GTK_FILTER_HPP_
#define _GI_GTK_FILTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Filter;

namespace base {


#define GI_GTK_FILTER_BASE base::FilterBase
class FilterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFilter BaseObjectType;

FilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_filter_get_type(); } 

// void gtk_filter_changed (GtkFilter* self /*none*/, GtkFilterChange change);
// void gtk_filter_changed (::GtkFilter* self /*none*/, ::GtkFilterChange change);
GI_INLINE_DECL void changed (Gtk::FilterChange change) noexcept;

// GtkFilterMatch gtk_filter_get_strictness (GtkFilter* self /*none*/);
// ::GtkFilterMatch gtk_filter_get_strictness (::GtkFilter* self /*none*/);
GI_INLINE_DECL Gtk::FilterMatch get_strictness () noexcept;

// gboolean gtk_filter_match (GtkFilter* self /*none*/, gpointer item /*none*/);
// gboolean gtk_filter_match (::GtkFilter* self /*none*/, ::GObject* item /*none*/);
GI_INLINE_DECL bool match (GObject::Object item) noexcept;

// (signal) void changed ( change);
// (signal) void changed (::GtkFilterChange change);
gi::signal_proxy<void(Gtk::Filter, Gtk::FilterChange change)> signal_changed()
{ return gi::signal_proxy<void(Gtk::Filter, Gtk::FilterChange change)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filter_extra_def.hpp>)
#include <gtk/filter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filter_extra.hpp>)
#include <gtk/filter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Filter : public GI_GTK_FILTER_BASE
{ typedef GI_GTK_FILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFilter>
{ typedef Gtk::Filter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FilterClassDef
{
typedef FilterClassDef self;
public:
typedef Gtk::Filter instance_type;
typedef ::GtkFilterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_strictness) = self;
using GI_MEMBER_CHECK_CONFLICT(match) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FilterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GtkFilterMatch Filter::get_strictness (GtkFilter* self /*none*/);
// ::GtkFilterMatch Filter::get_strictness (::GtkFilter* self /*none*/);
virtual Gtk::FilterMatch get_strictness_ () noexcept = 0;

// gboolean Filter::match (GtkFilter* self /*none*/, gpointer item /*none,nullable*/);
// gboolean Filter::match (::GtkFilter* self /*none*/, ::GObject* item /*none,nullable*/);
virtual bool match_ (GObject::Object item) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FilterClass: public detail::ClassTemplate<Gtk::impl::internal::FilterClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FilterClassDef;
typedef FilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FilterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GtkFilterMatch Filter::get_strictness (GtkFilter* self /*none*/);
// ::GtkFilterMatch Filter::get_strictness (::GtkFilter* self /*none*/);
GI_INLINE_DECL Gtk::FilterMatch get_strictness_ () noexcept override;

// gboolean Filter::match (GtkFilter* self /*none*/, gpointer item /*none,nullable*/);
// gboolean Filter::match (::GtkFilter* self /*none*/, ::GObject* item /*none,nullable*/);
GI_INLINE_DECL bool match_ (GObject::Object item) noexcept override;


};


struct FilterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FilterClass, get_strictness)
  GI_MEMBER_DEFINE(FilterClass, match)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_strictness),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, match)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FilterImpl = detail::ObjectImpl<Filter, internal::FilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
