// AUTO-GENERATED

#ifndef _GI_GTK_REQUISITION_HPP_
#define _GI_GTK_REQUISITION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Requisition_Ref;

class Requisition;

namespace base {


#define GI_GTK_REQUISITION_BASE base::RequisitionBase
class RequisitionBase : public gi::detail::GBoxedWrapperBase<RequisitionBase, ::GtkRequisition>
{
typedef gi::detail::GBoxedWrapperBase<RequisitionBase, ::GtkRequisition> super_type;
public:

RequisitionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_requisition_get_type(); } 

// gint Requisition::width (const ::GtkRequisition* obj /*none*/);
// gint Requisition::width (const ::GtkRequisition* obj /*none*/);
GI_INLINE_DECL gint width_ () const noexcept;

//  Requisition::width (::GtkRequisition* obj /*none*/, gint _value);
// void Requisition::width (::GtkRequisition* obj /*none*/, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint Requisition::height (const ::GtkRequisition* obj /*none*/);
// gint Requisition::height (const ::GtkRequisition* obj /*none*/);
GI_INLINE_DECL gint height_ () const noexcept;

//  Requisition::height (::GtkRequisition* obj /*none*/, gint _value);
// void Requisition::height (::GtkRequisition* obj /*none*/, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

// GtkRequisition* /*full*/ gtk_requisition_new ();
// ::GtkRequisition* /*full*/ gtk_requisition_new ();
static GI_INLINE_DECL Gtk::Requisition new_ () noexcept;

// GtkRequisition* /*full*/ gtk_requisition_copy (const GtkRequisition* requisition /*none*/);
// ::GtkRequisition* /*full*/ gtk_requisition_copy (const ::GtkRequisition* requisition /*none*/);
GI_INLINE_DECL Gtk::Requisition copy () const noexcept;

// void gtk_requisition_free (GtkRequisition* requisition /*none*/);
// void gtk_requisition_free (::GtkRequisition* requisition /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/requisition_extra_def.hpp>)
#include <gtk/requisition_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/requisition_extra.hpp>)
#include <gtk/requisition_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Requisition_Ref;

class Requisition : public gi::detail::GBoxedWrapper<Requisition, ::GtkRequisition, GI_GTK_REQUISITION_BASE, Requisition_Ref>
{ typedef gi::detail::GBoxedWrapper<Requisition, ::GtkRequisition, GI_GTK_REQUISITION_BASE, Requisition_Ref> super_type; using super_type::super_type; };


class Requisition_Ref : public gi::detail::GBoxedRefWrapper<Requisition, ::GtkRequisition, GI_GTK_REQUISITION_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Requisition, ::GtkRequisition, GI_GTK_REQUISITION_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRequisition>
{ typedef Gtk::Requisition type; }; 

} // namespace repository

} // namespace gi

#endif
