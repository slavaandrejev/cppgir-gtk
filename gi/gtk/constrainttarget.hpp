// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTTARGET_HPP_
#define _GI_GTK_CONSTRAINTTARGET_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ConstraintTarget;

namespace base {


#define GI_GTK_CONSTRAINTTARGET_BASE base::ConstraintTargetBase
class ConstraintTargetBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkConstraintTarget BaseObjectType;

ConstraintTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_constraint_target_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constrainttarget_extra_def.hpp>)
#include <gtk/constrainttarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constrainttarget_extra.hpp>)
#include <gtk/constrainttarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ConstraintTarget : public GI_GTK_CONSTRAINTTARGET_BASE
{ typedef GI_GTK_CONSTRAINTTARGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkConstraintTarget>
{ typedef Gtk::ConstraintTarget type; }; 

} // namespace repository

} // namespace gi

#endif
