// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLELABEL_HPP_
#define _GI_GTK_EDITABLELABEL_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Editable;

class EditableLabel;

namespace base {


#define GI_GTK_EDITABLELABEL_BASE base::EditableLabelBase
class EditableLabelBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkEditableLabel BaseObjectType;

EditableLabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_editable_label_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ gtk_editable_label_new (const char* str /*none*/);
// ::GtkEditableLabel* /*none*/ gtk_editable_label_new (const char* str /*none*/);
static GI_INLINE_DECL Gtk::EditableLabel new_ (const gi::cstring_v str) noexcept;

// gboolean gtk_editable_label_get_editing (GtkEditableLabel* self /*none*/);
// gboolean gtk_editable_label_get_editing (::GtkEditableLabel* self /*none*/);
GI_INLINE_DECL bool get_editing () noexcept;

// void gtk_editable_label_start_editing (GtkEditableLabel* self /*none*/);
// void gtk_editable_label_start_editing (::GtkEditableLabel* self /*none*/);
GI_INLINE_DECL void start_editing () noexcept;

// void gtk_editable_label_stop_editing (GtkEditableLabel* self /*none*/, gboolean commit);
// void gtk_editable_label_stop_editing (::GtkEditableLabel* self /*none*/, gboolean commit);
GI_INLINE_DECL void stop_editing (gboolean commit) noexcept;

gi::property_proxy<bool, base::EditableLabelBase> property_editing()
{ return gi::property_proxy<bool, base::EditableLabelBase> (*this, "editing"); }
const gi::property_proxy<bool, base::EditableLabelBase> property_editing() const
{ return gi::property_proxy<bool, base::EditableLabelBase> (*this, "editing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editablelabel_extra_def.hpp>)
#include <gtk/editablelabel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editablelabel_extra.hpp>)
#include <gtk/editablelabel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EditableLabel : public GI_GTK_EDITABLELABEL_BASE
{ typedef GI_GTK_EDITABLELABEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEditableLabel>
{ typedef Gtk::EditableLabel type; }; 

} // namespace repository

} // namespace gi

#include "editable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EditableLabelClassDef
{
typedef EditableLabelClassDef self;
public:
typedef Gtk::EditableLabel instance_type;
typedef ::GtkEditableLabelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~EditableLabelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EditableLabelClass: public detail::ClassTemplate<Gtk::impl::internal::EditableLabelClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::EditableInterfaceClassImpl>
{
friend class internal::EditableLabelClassDef;
typedef EditableLabelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EditableLabelClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::EditableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::EditableInterfaceClassImpl GtkEditableInterface_type;



};


struct EditableLabelClassDef::TypeInitData
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

using EditableLabelImpl = detail::ObjectImpl<EditableLabel, internal::EditableLabelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
