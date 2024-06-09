// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOXROW_HPP_
#define _GI_GTK_LISTBOXROW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Widget;

class ListBoxRow;

namespace base {


#define GI_GTK_LISTBOXROW_BASE base::ListBoxRowBase
class ListBoxRowBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkListBoxRow BaseObjectType;

ListBoxRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_box_row_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ gtk_list_box_row_new ();
// ::GtkListBoxRow* /*none*/ gtk_list_box_row_new ();
static GI_INLINE_DECL Gtk::ListBoxRow new_ () noexcept;

// void gtk_list_box_row_changed (GtkListBoxRow* row /*none*/);
// void gtk_list_box_row_changed (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL void changed () noexcept;

// gboolean gtk_list_box_row_get_activatable (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_get_activatable (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL bool get_activatable () noexcept;

// GtkWidget* /*none,nullable*/ gtk_list_box_row_get_child (GtkListBoxRow* row /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_box_row_get_child (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkWidget* /*none,nullable*/ gtk_list_box_row_get_header (GtkListBoxRow* row /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_box_row_get_header (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL Gtk::Widget get_header () noexcept;

// int gtk_list_box_row_get_index (GtkListBoxRow* row /*none*/);
// gint gtk_list_box_row_get_index (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL gint get_index () noexcept;

// gboolean gtk_list_box_row_get_selectable (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_get_selectable (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_list_box_row_is_selected (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_is_selected (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL bool is_selected () noexcept;

// void gtk_list_box_row_set_activatable (GtkListBoxRow* row /*none*/, gboolean activatable);
// void gtk_list_box_row_set_activatable (::GtkListBoxRow* row /*none*/, gboolean activatable);
GI_INLINE_DECL void set_activatable (gboolean activatable) noexcept;

// void gtk_list_box_row_set_child (GtkListBoxRow* row /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_box_row_set_child (::GtkListBoxRow* row /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_list_box_row_set_header (GtkListBoxRow* row /*none*/, GtkWidget* header /*none,nullable*/);
// void gtk_list_box_row_set_header (::GtkListBoxRow* row /*none*/, ::GtkWidget* header /*none,nullable*/);
GI_INLINE_DECL void set_header (Gtk::Widget header) noexcept;
GI_INLINE_DECL void set_header () noexcept;

// void gtk_list_box_row_set_selectable (GtkListBoxRow* row /*none*/, gboolean selectable);
// void gtk_list_box_row_set_selectable (::GtkListBoxRow* row /*none*/, gboolean selectable);
GI_INLINE_DECL void set_selectable (gboolean selectable) noexcept;

gi::property_proxy<bool, base::ListBoxRowBase> property_activatable()
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "activatable"); }
const gi::property_proxy<bool, base::ListBoxRowBase> property_activatable() const
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "activatable"); }

gi::property_proxy<Gtk::Widget, base::ListBoxRowBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ListBoxRowBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ListBoxRowBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ListBoxRowBase> (*this, "child"); }

gi::property_proxy<bool, base::ListBoxRowBase> property_selectable()
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::ListBoxRowBase> property_selectable() const
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "selectable"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::ListBoxRow)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ListBoxRow)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra_def.hpp>)
#include <gtk/listboxrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra.hpp>)
#include <gtk/listboxrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBoxRow : public GI_GTK_LISTBOXROW_BASE
{ typedef GI_GTK_LISTBOXROW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBoxRow>
{ typedef Gtk::ListBoxRow type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ListBoxRowClassDef
{
typedef ListBoxRowClassDef self;
public:
typedef Gtk::ListBoxRow instance_type;
typedef ::GtkListBoxRowClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ListBoxRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ListBoxRow::activate (GtkListBoxRow* row /*none*/);
// void ListBoxRow::activate (::GtkListBoxRow* row /*none*/);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ListBoxRowClass: public detail::ClassTemplate<Gtk::impl::internal::ListBoxRowClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::ListBoxRowClassDef;
typedef ListBoxRowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ListBoxRowClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void ListBoxRow::activate (GtkListBoxRow* row /*none*/);
// void ListBoxRow::activate (::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;


};


struct ListBoxRowClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ListBoxRowClass, activate)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ListBoxRowImpl = detail::ObjectImpl<ListBoxRow, internal::ListBoxRowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
