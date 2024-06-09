// AUTO-GENERATED

#ifndef _GI_GTK_DROPDOWN_HPP_
#define _GI_GTK_DROPDOWN_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ListItemFactory;

class DropDown;

namespace base {


#define GI_GTK_DROPDOWN_BASE base::DropDownBase
class DropDownBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkDropDown BaseObjectType;

DropDownBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drop_down_get_type(); } 

// GtkWidget* /*none*/ gtk_drop_down_new (GListModel* model /*full,nullable*/, GtkExpression* expression /*full,nullable*/);
// ::GtkDropDown* /*none*/ gtk_drop_down_new (::GListModel* model /*full,nullable*/,  expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkWidget* /*none*/ gtk_drop_down_new_from_strings (const char* const* strings /*none*/);
// ::GtkDropDown* /*none*/ gtk_drop_down_new_from_strings (const char** strings /*none*/);
static GI_INLINE_DECL Gtk::DropDown new_from_strings (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> strings) noexcept;

// gboolean gtk_drop_down_get_enable_search (GtkDropDown* self /*none*/);
// gboolean gtk_drop_down_get_enable_search (::GtkDropDown* self /*none*/);
GI_INLINE_DECL bool get_enable_search () noexcept;

// GtkExpression* /*none,nullable*/ gtk_drop_down_get_expression (GtkDropDown* self /*none*/);
//  /*none,nullable*/ gtk_drop_down_get_expression (::GtkDropDown* self /*none*/);
// SKIP;  type  not supported

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_factory (::GtkDropDown* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_factory () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_header_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_header_factory (::GtkDropDown* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_header_factory () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_list_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_list_factory (::GtkDropDown* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_list_factory () noexcept;

// GListModel* /*none,nullable*/ gtk_drop_down_get_model (GtkDropDown* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_drop_down_get_model (::GtkDropDown* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// GtkStringFilterMatchMode gtk_drop_down_get_search_match_mode (GtkDropDown* self /*none*/);
// ::GtkStringFilterMatchMode gtk_drop_down_get_search_match_mode (::GtkDropDown* self /*none*/);
GI_INLINE_DECL Gtk::StringFilterMatchMode get_search_match_mode () noexcept;

// guint gtk_drop_down_get_selected (GtkDropDown* self /*none*/);
// guint gtk_drop_down_get_selected (::GtkDropDown* self /*none*/);
GI_INLINE_DECL guint get_selected () noexcept;

// gpointer /*none,nullable*/ gtk_drop_down_get_selected_item (GtkDropDown* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_drop_down_get_selected_item (::GtkDropDown* self /*none*/);
GI_INLINE_DECL GObject::Object get_selected_item () noexcept;

// gboolean gtk_drop_down_get_show_arrow (GtkDropDown* self /*none*/);
// gboolean gtk_drop_down_get_show_arrow (::GtkDropDown* self /*none*/);
GI_INLINE_DECL bool get_show_arrow () noexcept;

// void gtk_drop_down_set_enable_search (GtkDropDown* self /*none*/, gboolean enable_search);
// void gtk_drop_down_set_enable_search (::GtkDropDown* self /*none*/, gboolean enable_search);
GI_INLINE_DECL void set_enable_search (gboolean enable_search) noexcept;

// void gtk_drop_down_set_expression (GtkDropDown* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_drop_down_set_expression (::GtkDropDown* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_drop_down_set_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_factory () noexcept;

// void gtk_drop_down_set_header_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_header_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_header_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_header_factory () noexcept;

// void gtk_drop_down_set_list_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_list_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_list_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_list_factory () noexcept;

// void gtk_drop_down_set_model (GtkDropDown* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_drop_down_set_model (::GtkDropDown* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_drop_down_set_search_match_mode (GtkDropDown* self /*none*/, GtkStringFilterMatchMode search_match_mode);
// void gtk_drop_down_set_search_match_mode (::GtkDropDown* self /*none*/, ::GtkStringFilterMatchMode search_match_mode);
GI_INLINE_DECL void set_search_match_mode (Gtk::StringFilterMatchMode search_match_mode) noexcept;

// void gtk_drop_down_set_selected (GtkDropDown* self /*none*/, guint position);
// void gtk_drop_down_set_selected (::GtkDropDown* self /*none*/, guint position);
GI_INLINE_DECL void set_selected (guint position) noexcept;

// void gtk_drop_down_set_show_arrow (GtkDropDown* self /*none*/, gboolean show_arrow);
// void gtk_drop_down_set_show_arrow (::GtkDropDown* self /*none*/, gboolean show_arrow);
GI_INLINE_DECL void set_show_arrow (gboolean show_arrow) noexcept;

gi::property_proxy<bool, base::DropDownBase> property_enable_search()
{ return gi::property_proxy<bool, base::DropDownBase> (*this, "enable-search"); }
const gi::property_proxy<bool, base::DropDownBase> property_enable_search() const
{ return gi::property_proxy<bool, base::DropDownBase> (*this, "enable-search"); }

gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "factory"); }

gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_header_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "header-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_header_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "header-factory"); }

gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_list_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "list-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> property_list_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::DropDownBase> (*this, "list-factory"); }

gi::property_proxy<Gio::ListModel, base::DropDownBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::DropDownBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::DropDownBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::DropDownBase> (*this, "model"); }

gi::property_proxy<Gtk::StringFilterMatchMode, base::DropDownBase> property_search_match_mode()
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::DropDownBase> (*this, "search-match-mode"); }
const gi::property_proxy<Gtk::StringFilterMatchMode, base::DropDownBase> property_search_match_mode() const
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::DropDownBase> (*this, "search-match-mode"); }

gi::property_proxy<guint, base::DropDownBase> property_selected()
{ return gi::property_proxy<guint, base::DropDownBase> (*this, "selected"); }
const gi::property_proxy<guint, base::DropDownBase> property_selected() const
{ return gi::property_proxy<guint, base::DropDownBase> (*this, "selected"); }

gi::property_proxy<GObject::Object, base::DropDownBase> property_selected_item()
{ return gi::property_proxy<GObject::Object, base::DropDownBase> (*this, "selected-item"); }
const gi::property_proxy<GObject::Object, base::DropDownBase> property_selected_item() const
{ return gi::property_proxy<GObject::Object, base::DropDownBase> (*this, "selected-item"); }

gi::property_proxy<bool, base::DropDownBase> property_show_arrow()
{ return gi::property_proxy<bool, base::DropDownBase> (*this, "show-arrow"); }
const gi::property_proxy<bool, base::DropDownBase> property_show_arrow() const
{ return gi::property_proxy<bool, base::DropDownBase> (*this, "show-arrow"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::DropDown)> signal_activate()
{ return gi::signal_proxy<void(Gtk::DropDown)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dropdown_extra_def.hpp>)
#include <gtk/dropdown_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dropdown_extra.hpp>)
#include <gtk/dropdown_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DropDown : public GI_GTK_DROPDOWN_BASE
{ typedef GI_GTK_DROPDOWN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDropDown>
{ typedef Gtk::DropDown type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DropDownClassDef
{
typedef DropDownClassDef self;
public:
typedef Gtk::DropDown instance_type;
typedef ::GtkDropDownClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DropDownClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DropDownClass: public detail::ClassTemplate<Gtk::impl::internal::DropDownClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::DropDownClassDef;
typedef DropDownClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DropDownClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct DropDownClassDef::TypeInitData
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

using DropDownImpl = detail::ObjectImpl<DropDown, internal::DropDownClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
