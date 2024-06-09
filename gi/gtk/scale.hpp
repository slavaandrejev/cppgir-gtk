// AUTO-GENERATED

#ifndef _GI_GTK_SCALE_HPP_
#define _GI_GTK_SCALE_HPP_

#include "range.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class Scale;

namespace base {


#define GI_GTK_SCALE_BASE base::ScaleBase
class ScaleBase : public Gtk::Range
{
typedef Gtk::Range super_type;
public:
typedef ::GtkScale BaseObjectType;

ScaleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_get_type(); } 

// GtkWidget* /*none*/ gtk_scale_new (GtkOrientation orientation, GtkAdjustment* adjustment /*none,nullable*/);
// ::GtkScale* /*none*/ gtk_scale_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment /*none,nullable*/);
static GI_INLINE_DECL Gtk::Scale new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept;
static GI_INLINE_DECL Gtk::Scale new_ (Gtk::Orientation orientation) noexcept;

// GtkWidget* /*none*/ gtk_scale_new_with_range (GtkOrientation orientation, double min, double max, double step);
// ::GtkScale* /*none*/ gtk_scale_new_with_range (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
static GI_INLINE_DECL Gtk::Scale new_with_range (Gtk::Orientation orientation, gdouble min, gdouble max, gdouble step) noexcept;

// void gtk_scale_add_mark (GtkScale* scale /*none*/, double value, GtkPositionType position, const char* markup /*none,nullable*/);
// void gtk_scale_add_mark (::GtkScale* scale /*none*/, gdouble value, ::GtkPositionType position, const char* markup /*none,nullable*/);
GI_INLINE_DECL void add_mark (gdouble value, Gtk::PositionType position, const gi::cstring_v markup) noexcept;
GI_INLINE_DECL void add_mark (gdouble value, Gtk::PositionType position) noexcept;

// void gtk_scale_clear_marks (GtkScale* scale /*none*/);
// void gtk_scale_clear_marks (::GtkScale* scale /*none*/);
GI_INLINE_DECL void clear_marks () noexcept;

// int gtk_scale_get_digits (GtkScale* scale /*none*/);
// gint gtk_scale_get_digits (::GtkScale* scale /*none*/);
GI_INLINE_DECL gint get_digits () noexcept;

// gboolean gtk_scale_get_draw_value (GtkScale* scale /*none*/);
// gboolean gtk_scale_get_draw_value (::GtkScale* scale /*none*/);
GI_INLINE_DECL bool get_draw_value () noexcept;

// gboolean gtk_scale_get_has_origin (GtkScale* scale /*none*/);
// gboolean gtk_scale_get_has_origin (::GtkScale* scale /*none*/);
GI_INLINE_DECL bool get_has_origin () noexcept;

// PangoLayout* /*none,nullable*/ gtk_scale_get_layout (GtkScale* scale /*none*/);
// ::PangoLayout* /*none,nullable*/ gtk_scale_get_layout (::GtkScale* scale /*none*/);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void gtk_scale_get_layout_offsets (GtkScale* scale /*none*/, int* x, int* y);
// void gtk_scale_get_layout_offsets (::GtkScale* scale /*none*/, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets (gint * x, gint * y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_layout_offsets () noexcept;

// GtkPositionType gtk_scale_get_value_pos (GtkScale* scale /*none*/);
// ::GtkPositionType gtk_scale_get_value_pos (::GtkScale* scale /*none*/);
GI_INLINE_DECL Gtk::PositionType get_value_pos () noexcept;

// void gtk_scale_set_digits (GtkScale* scale /*none*/, int digits);
// void gtk_scale_set_digits (::GtkScale* scale /*none*/, gint digits);
GI_INLINE_DECL void set_digits (gint digits) noexcept;

// void gtk_scale_set_draw_value (GtkScale* scale /*none*/, gboolean draw_value);
// void gtk_scale_set_draw_value (::GtkScale* scale /*none*/, gboolean draw_value);
GI_INLINE_DECL void set_draw_value (gboolean draw_value) noexcept;

// void gtk_scale_set_format_value_func (GtkScale* scale /*none*/, GtkScaleFormatValueFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy_notify /*none,nullable*/);
// void gtk_scale_set_format_value_func (::GtkScale* scale /*none*/, Gtk::ScaleFormatValueFunc::cfunction_type func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none,nullable*/);
GI_INLINE_DECL void set_format_value_func (Gtk::ScaleFormatValueFunc func) noexcept;

// void gtk_scale_set_has_origin (GtkScale* scale /*none*/, gboolean has_origin);
// void gtk_scale_set_has_origin (::GtkScale* scale /*none*/, gboolean has_origin);
GI_INLINE_DECL void set_has_origin (gboolean has_origin) noexcept;

// void gtk_scale_set_value_pos (GtkScale* scale /*none*/, GtkPositionType pos);
// void gtk_scale_set_value_pos (::GtkScale* scale /*none*/, ::GtkPositionType pos);
GI_INLINE_DECL void set_value_pos (Gtk::PositionType pos) noexcept;

gi::property_proxy<gint, base::ScaleBase> property_digits()
{ return gi::property_proxy<gint, base::ScaleBase> (*this, "digits"); }
const gi::property_proxy<gint, base::ScaleBase> property_digits() const
{ return gi::property_proxy<gint, base::ScaleBase> (*this, "digits"); }

gi::property_proxy<bool, base::ScaleBase> property_draw_value()
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "draw-value"); }
const gi::property_proxy<bool, base::ScaleBase> property_draw_value() const
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "draw-value"); }

gi::property_proxy<bool, base::ScaleBase> property_has_origin()
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "has-origin"); }
const gi::property_proxy<bool, base::ScaleBase> property_has_origin() const
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "has-origin"); }

gi::property_proxy<Gtk::PositionType, base::ScaleBase> property_value_pos()
{ return gi::property_proxy<Gtk::PositionType, base::ScaleBase> (*this, "value-pos"); }
const gi::property_proxy<Gtk::PositionType, base::ScaleBase> property_value_pos() const
{ return gi::property_proxy<Gtk::PositionType, base::ScaleBase> (*this, "value-pos"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_def.hpp>)
#include <gtk/scale_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scale_extra.hpp>)
#include <gtk/scale_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Scale : public GI_GTK_SCALE_BASE
{ typedef GI_GTK_SCALE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScale>
{ typedef Gtk::Scale type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleClassDef
{
typedef ScaleClassDef self;
public:
typedef Gtk::Scale instance_type;
typedef ::GtkScaleClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_layout_offsets) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ScaleClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Scale::get_layout_offsets (GtkScale* scale /*none*/, int* x, int* y);
// void Scale::get_layout_offsets (::GtkScale* scale /*none*/, gint* x, gint* y);
virtual void get_layout_offsets_ (gint & x, gint & y) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ScaleClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleClassDef, Gtk::impl::internal::RangeClass>
{
friend class internal::ScaleClassDef;
typedef ScaleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleClassDef, Gtk::impl::internal::RangeClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Scale::get_layout_offsets (GtkScale* scale /*none*/, int* x, int* y);
// void Scale::get_layout_offsets (::GtkScale* scale /*none*/, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets_ (gint & x, gint & y) noexcept override;


};


struct ScaleClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ScaleClass, get_layout_offsets)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_layout_offsets)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ScaleImpl = detail::ObjectImpl<Scale, internal::ScaleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
