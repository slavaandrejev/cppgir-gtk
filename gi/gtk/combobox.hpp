// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOX_HPP_
#define _GI_GTK_COMBOBOX_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellEditable;
class CellLayout;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class Widget;

class ComboBox;

namespace base {


#define GI_GTK_COMBOBOX_BASE base::ComboBoxBase
class ComboBoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkComboBox BaseObjectType;

ComboBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_combo_box_get_type(); } 

GI_INLINE_DECL Gtk::CellEditable interface_ (gi::interface_tag<Gtk::CellEditable>);

GI_INLINE_DECL operator Gtk::CellEditable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// GtkWidget* /*none*/ gtk_combo_box_new ();
// ::GtkComboBox* /*none*/ gtk_combo_box_new ();
static GI_INLINE_DECL Gtk::ComboBox new_ () noexcept;

// GtkWidget* /*none*/ gtk_combo_box_new_with_entry ();
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_entry ();
static GI_INLINE_DECL Gtk::ComboBox new_with_entry () noexcept;

// GtkWidget* /*none*/ gtk_combo_box_new_with_model (GtkTreeModel* model /*none*/);
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_model (::GtkTreeModel* model /*none*/);
static GI_INLINE_DECL Gtk::ComboBox new_with_model (Gtk::TreeModel model) noexcept;

// GtkWidget* /*none*/ gtk_combo_box_new_with_model_and_entry (GtkTreeModel* model /*none*/);
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_model_and_entry (::GtkTreeModel* model /*none*/);
static GI_INLINE_DECL Gtk::ComboBox new_with_model_and_entry (Gtk::TreeModel model) noexcept;

// int gtk_combo_box_get_active (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_active (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL gint get_active () noexcept;

// const char* /*none,nullable*/ gtk_combo_box_get_active_id (GtkComboBox* combo_box /*none*/);
// const char* /*none,nullable*/ gtk_combo_box_get_active_id (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL gi::cstring_v get_active_id () noexcept;

// gboolean gtk_combo_box_get_active_iter (GtkComboBox* combo_box /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// gboolean gtk_combo_box_get_active_iter (::GtkComboBox* combo_box /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
GI_INLINE_DECL bool get_active_iter (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_active_iter () noexcept;

// GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox* combo_box /*none*/);
// ::GtkSensitivityType gtk_combo_box_get_button_sensitivity (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL Gtk::SensitivityType get_button_sensitivity () noexcept;

// GtkWidget* /*none,nullable*/ gtk_combo_box_get_child (GtkComboBox* combo_box /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_combo_box_get_child (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// int gtk_combo_box_get_entry_text_column (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_entry_text_column (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL gint get_entry_text_column () noexcept;

// gboolean gtk_combo_box_get_has_entry (GtkComboBox* combo_box /*none*/);
// gboolean gtk_combo_box_get_has_entry (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL bool get_has_entry () noexcept;

// int gtk_combo_box_get_id_column (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_id_column (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL gint get_id_column () noexcept;

// GtkTreeModel* /*none,nullable*/ gtk_combo_box_get_model (GtkComboBox* combo_box /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_combo_box_get_model (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// gboolean gtk_combo_box_get_popup_fixed_width (GtkComboBox* combo_box /*none*/);
// gboolean gtk_combo_box_get_popup_fixed_width (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL bool get_popup_fixed_width () noexcept;

// FAILURE on gtk_combo_box_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// void gtk_combo_box_popdown (GtkComboBox* combo_box /*none*/);
// void gtk_combo_box_popdown (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_combo_box_popup (GtkComboBox* combo_box /*none*/);
// void gtk_combo_box_popup (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL void popup () noexcept;

// void gtk_combo_box_popup_for_device (GtkComboBox* combo_box /*none*/, GdkDevice* device /*none*/);
// void gtk_combo_box_popup_for_device (::GtkComboBox* combo_box /*none*/, ::GdkDevice* device /*none*/);
GI_INLINE_DECL void popup_for_device (Gdk::Device device) noexcept;

// void gtk_combo_box_set_active (GtkComboBox* combo_box /*none*/, int index_);
// void gtk_combo_box_set_active (::GtkComboBox* combo_box /*none*/, gint index_);
GI_INLINE_DECL void set_active (gint index_) noexcept;

// gboolean gtk_combo_box_set_active_id (GtkComboBox* combo_box /*none*/, const char* active_id /*none,nullable*/);
// gboolean gtk_combo_box_set_active_id (::GtkComboBox* combo_box /*none*/, const char* active_id /*none,nullable*/);
GI_INLINE_DECL bool set_active_id (const gi::cstring_v active_id) noexcept;
GI_INLINE_DECL bool set_active_id () noexcept;

// void gtk_combo_box_set_active_iter (GtkComboBox* combo_box /*none*/, GtkTreeIter* iter /*none,nullable*/);
// void gtk_combo_box_set_active_iter (::GtkComboBox* combo_box /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
GI_INLINE_DECL void set_active_iter (Gtk::TreeIter_Ref iter) noexcept;
GI_INLINE_DECL void set_active_iter () noexcept;

// void gtk_combo_box_set_button_sensitivity (GtkComboBox* combo_box /*none*/, GtkSensitivityType sensitivity);
// void gtk_combo_box_set_button_sensitivity (::GtkComboBox* combo_box /*none*/, ::GtkSensitivityType sensitivity);
GI_INLINE_DECL void set_button_sensitivity (Gtk::SensitivityType sensitivity) noexcept;

// void gtk_combo_box_set_child (GtkComboBox* combo_box /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_combo_box_set_child (::GtkComboBox* combo_box /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_combo_box_set_entry_text_column (GtkComboBox* combo_box /*none*/, int text_column);
// void gtk_combo_box_set_entry_text_column (::GtkComboBox* combo_box /*none*/, gint text_column);
GI_INLINE_DECL void set_entry_text_column (gint text_column) noexcept;

// void gtk_combo_box_set_id_column (GtkComboBox* combo_box /*none*/, int id_column);
// void gtk_combo_box_set_id_column (::GtkComboBox* combo_box /*none*/, gint id_column);
GI_INLINE_DECL void set_id_column (gint id_column) noexcept;

// void gtk_combo_box_set_model (GtkComboBox* combo_box /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_combo_box_set_model (::GtkComboBox* combo_box /*none*/, ::GtkTreeModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_combo_box_set_popup_fixed_width (GtkComboBox* combo_box /*none*/, gboolean fixed);
// void gtk_combo_box_set_popup_fixed_width (::GtkComboBox* combo_box /*none*/, gboolean fixed);
GI_INLINE_DECL void set_popup_fixed_width (gboolean fixed) noexcept;

// void gtk_combo_box_set_row_separator_func (GtkComboBox* combo_box /*none*/, GtkTreeViewRowSeparatorFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_combo_box_set_row_separator_func (::GtkComboBox* combo_box /*none*/, Gtk::TreeViewRowSeparatorFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept;

gi::property_proxy<gint, base::ComboBoxBase> property_active()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "active"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_active() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "active"); }

gi::property_proxy<gi::cstring, base::ComboBoxBase> property_active_id()
{ return gi::property_proxy<gi::cstring, base::ComboBoxBase> (*this, "active-id"); }
const gi::property_proxy<gi::cstring, base::ComboBoxBase> property_active_id() const
{ return gi::property_proxy<gi::cstring, base::ComboBoxBase> (*this, "active-id"); }

gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> property_button_sensitivity()
{ return gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> (*this, "button-sensitivity"); }
const gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> property_button_sensitivity() const
{ return gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> (*this, "button-sensitivity"); }

gi::property_proxy<Gtk::Widget, base::ComboBoxBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ComboBoxBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ComboBoxBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ComboBoxBase> (*this, "child"); }

gi::property_proxy<gint, base::ComboBoxBase> property_entry_text_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "entry-text-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_entry_text_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "entry-text-column"); }

gi::property_proxy<bool, base::ComboBoxBase> property_has_entry()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-entry"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_has_entry() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-entry"); }

gi::property_proxy<bool, base::ComboBoxBase> property_has_frame()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_has_frame() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-frame"); }

gi::property_proxy<gint, base::ComboBoxBase> property_id_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "id-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_id_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "id-column"); }

gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> (*this, "model"); }

gi::property_proxy<bool, base::ComboBoxBase> property_popup_fixed_width()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-fixed-width"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_popup_fixed_width() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-fixed-width"); }

gi::property_proxy<bool, base::ComboBoxBase> property_popup_shown()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-shown"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_popup_shown() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-shown"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::ComboBox)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ComboBox)> (*this, "activate"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::ComboBox)> signal_changed()
{ return gi::signal_proxy<void(Gtk::ComboBox)> (*this, "changed"); }

// (signal) gchar* /*full*/ format-entry-text (gchar* path /*none*/);
// (signal) char* /*full*/ format-entry-text (char* path /*none*/);
gi::signal_proxy<gi::cstring(Gtk::ComboBox, gi::cstring_v path)> signal_format_entry_text()
{ return gi::signal_proxy<gi::cstring(Gtk::ComboBox, gi::cstring_v path)> (*this, "format-entry-text"); }

// (signal) void move-active ( scroll_type);
// (signal) void move-active (::GtkScrollType scroll_type);
gi::signal_proxy<void(Gtk::ComboBox, Gtk::ScrollType scroll_type)> signal_move_active()
{ return gi::signal_proxy<void(Gtk::ComboBox, Gtk::ScrollType scroll_type)> (*this, "move-active"); }

// (signal) gboolean popdown ();
// (signal) gboolean popdown ();
gi::signal_proxy<bool(Gtk::ComboBox)> signal_popdown()
{ return gi::signal_proxy<bool(Gtk::ComboBox)> (*this, "popdown"); }

// (signal) void popup ();
// (signal) void popup ();
gi::signal_proxy<void(Gtk::ComboBox)> signal_popup()
{ return gi::signal_proxy<void(Gtk::ComboBox)> (*this, "popup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_def.hpp>)
#include <gtk/combobox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra.hpp>)
#include <gtk/combobox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ComboBox : public GI_GTK_COMBOBOX_BASE
{ typedef GI_GTK_COMBOBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkComboBox>
{ typedef Gtk::ComboBox type; }; 

} // namespace repository

} // namespace gi

#include "celleditable.hpp"
#include "celllayout.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ComboBoxClassDef
{
typedef ComboBoxClassDef self;
public:
typedef Gtk::ComboBox instance_type;
typedef ::GtkComboBoxClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(format_entry_text) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ComboBoxClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ComboBox::activate (GtkComboBox* combo_box /*none*/);
// void ComboBox::activate (::GtkComboBox* combo_box /*none*/);
virtual void activate_ () noexcept = 0;

// void ComboBox::changed (GtkComboBox* combo_box /*none*/);
// void ComboBox::changed (::GtkComboBox* combo_box /*none*/);
virtual void changed_ () noexcept = 0;

// char* /*full*/ ComboBox::format_entry_text (GtkComboBox* combo_box /*none*/, const char* path /*none*/);
// char* /*full*/ ComboBox::format_entry_text (::GtkComboBox* combo_box /*none*/, const char* path /*none*/);
virtual gi::cstring format_entry_text_ (const gi::cstring_v path) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ComboBoxClass: public detail::ClassTemplate<Gtk::impl::internal::ComboBoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl>
{
friend class internal::ComboBoxClassDef;
typedef ComboBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ComboBoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellEditableIfaceClassImpl GtkCellEditableIface_type;
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;


// void ComboBox::activate (GtkComboBox* combo_box /*none*/);
// void ComboBox::activate (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;

// void ComboBox::changed (GtkComboBox* combo_box /*none*/);
// void ComboBox::changed (::GtkComboBox* combo_box /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// char* /*full*/ ComboBox::format_entry_text (GtkComboBox* combo_box /*none*/, const char* path /*none*/);
// char* /*full*/ ComboBox::format_entry_text (::GtkComboBox* combo_box /*none*/, const char* path /*none*/);
GI_INLINE_DECL gi::cstring format_entry_text_ (const gi::cstring_v path) noexcept override;


};


struct ComboBoxClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ComboBoxClass, activate)
  GI_MEMBER_DEFINE(ComboBoxClass, changed)
  GI_MEMBER_DEFINE(ComboBoxClass, format_entry_text)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, format_entry_text)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ComboBoxImpl = detail::ObjectImpl<ComboBox, internal::ComboBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
