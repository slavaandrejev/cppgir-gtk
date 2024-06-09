// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTGUIDE_HPP_
#define _GI_GTK_CONSTRAINTGUIDE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ConstraintTarget;

class ConstraintGuide;

namespace base {


#define GI_GTK_CONSTRAINTGUIDE_BASE base::ConstraintGuideBase
class ConstraintGuideBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkConstraintGuide BaseObjectType;

ConstraintGuideBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_constraint_guide_get_type(); } 

GI_INLINE_DECL Gtk::ConstraintTarget interface_ (gi::interface_tag<Gtk::ConstraintTarget>);

GI_INLINE_DECL operator Gtk::ConstraintTarget ();

// GtkConstraintGuide* /*full*/ gtk_constraint_guide_new ();
// ::GtkConstraintGuide* /*full*/ gtk_constraint_guide_new ();
static GI_INLINE_DECL Gtk::ConstraintGuide new_ () noexcept;

// void gtk_constraint_guide_get_max_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_max_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_max_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_max_size () noexcept;

// void gtk_constraint_guide_get_min_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_min_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_min_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_min_size () noexcept;

// const char* /*none,nullable*/ gtk_constraint_guide_get_name (GtkConstraintGuide* guide /*none*/);
// const char* /*none,nullable*/ gtk_constraint_guide_get_name (::GtkConstraintGuide* guide /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// void gtk_constraint_guide_get_nat_size (GtkConstraintGuide* guide /*none*/, int* width, int* height);
// void gtk_constraint_guide_get_nat_size (::GtkConstraintGuide* guide /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_nat_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_nat_size () noexcept;

// GtkConstraintStrength gtk_constraint_guide_get_strength (GtkConstraintGuide* guide /*none*/);
// ::GtkConstraintStrength gtk_constraint_guide_get_strength (::GtkConstraintGuide* guide /*none*/);
GI_INLINE_DECL Gtk::ConstraintStrength get_strength () noexcept;

// void gtk_constraint_guide_set_max_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_max_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
GI_INLINE_DECL void set_max_size (gint width, gint height) noexcept;

// void gtk_constraint_guide_set_min_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_min_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
GI_INLINE_DECL void set_min_size (gint width, gint height) noexcept;

// void gtk_constraint_guide_set_name (GtkConstraintGuide* guide /*none*/, const char* name /*none,nullable*/);
// void gtk_constraint_guide_set_name (::GtkConstraintGuide* guide /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void gtk_constraint_guide_set_nat_size (GtkConstraintGuide* guide /*none*/, int width, int height);
// void gtk_constraint_guide_set_nat_size (::GtkConstraintGuide* guide /*none*/, gint width, gint height);
GI_INLINE_DECL void set_nat_size (gint width, gint height) noexcept;

// void gtk_constraint_guide_set_strength (GtkConstraintGuide* guide /*none*/, GtkConstraintStrength strength);
// void gtk_constraint_guide_set_strength (::GtkConstraintGuide* guide /*none*/, ::GtkConstraintStrength strength);
GI_INLINE_DECL void set_strength (Gtk::ConstraintStrength strength) noexcept;

gi::property_proxy<gint, base::ConstraintGuideBase> property_max_height()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "max-height"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_max_height() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "max-height"); }

gi::property_proxy<gint, base::ConstraintGuideBase> property_max_width()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "max-width"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_max_width() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "max-width"); }

gi::property_proxy<gint, base::ConstraintGuideBase> property_min_height()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "min-height"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_min_height() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "min-height"); }

gi::property_proxy<gint, base::ConstraintGuideBase> property_min_width()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "min-width"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_min_width() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "min-width"); }

gi::property_proxy<gi::cstring, base::ConstraintGuideBase> property_name()
{ return gi::property_proxy<gi::cstring, base::ConstraintGuideBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::ConstraintGuideBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::ConstraintGuideBase> (*this, "name"); }

gi::property_proxy<gint, base::ConstraintGuideBase> property_nat_height()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "nat-height"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_nat_height() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "nat-height"); }

gi::property_proxy<gint, base::ConstraintGuideBase> property_nat_width()
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "nat-width"); }
const gi::property_proxy<gint, base::ConstraintGuideBase> property_nat_width() const
{ return gi::property_proxy<gint, base::ConstraintGuideBase> (*this, "nat-width"); }

gi::property_proxy<Gtk::ConstraintStrength, base::ConstraintGuideBase> property_strength()
{ return gi::property_proxy<Gtk::ConstraintStrength, base::ConstraintGuideBase> (*this, "strength"); }
const gi::property_proxy<Gtk::ConstraintStrength, base::ConstraintGuideBase> property_strength() const
{ return gi::property_proxy<Gtk::ConstraintStrength, base::ConstraintGuideBase> (*this, "strength"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraintguide_extra_def.hpp>)
#include <gtk/constraintguide_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraintguide_extra.hpp>)
#include <gtk/constraintguide_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ConstraintGuide : public GI_GTK_CONSTRAINTGUIDE_BASE
{ typedef GI_GTK_CONSTRAINTGUIDE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkConstraintGuide>
{ typedef Gtk::ConstraintGuide type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ConstraintGuideClassDef
{
typedef ConstraintGuideClassDef self;
public:
typedef Gtk::ConstraintGuide instance_type;
typedef ::GtkConstraintGuideClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ConstraintGuideClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConstraintGuideClass: public detail::ClassTemplate<Gtk::impl::internal::ConstraintGuideClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ConstraintGuideClassDef;
typedef ConstraintGuideClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ConstraintGuideClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ConstraintGuideClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ConstraintGuideImpl = detail::ObjectImpl<ConstraintGuide, internal::ConstraintGuideClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
