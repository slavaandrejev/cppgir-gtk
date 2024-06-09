// AUTO-GENERATED

#ifndef _GI_GTK_LABEL_HPP_
#define _GI_GTK_LABEL_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Label;

namespace base {


#define GI_GTK_LABEL_BASE base::LabelBase
class LabelBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkLabel BaseObjectType;

LabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_label_get_type(); } 

// GtkWidget* /*none*/ gtk_label_new (const char* str /*none,nullable*/);
// ::GtkLabel* /*none*/ gtk_label_new (const char* str /*none,nullable*/);
static GI_INLINE_DECL Gtk::Label new_ (const gi::cstring_v str) noexcept;
static GI_INLINE_DECL Gtk::Label new_ () noexcept;

// GtkWidget* /*none*/ gtk_label_new_with_mnemonic (const char* str /*none,nullable*/);
// ::GtkLabel* /*none*/ gtk_label_new_with_mnemonic (const char* str /*none,nullable*/);
static GI_INLINE_DECL Gtk::Label new_with_mnemonic (const gi::cstring_v str) noexcept;
static GI_INLINE_DECL Gtk::Label new_with_mnemonic () noexcept;

// PangoAttrList* /*none,nullable*/ gtk_label_get_attributes (GtkLabel* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_label_get_attributes (::GtkLabel* self /*none*/);
GI_INLINE_DECL Pango::AttrList_Ref get_attributes () noexcept;

// const char* /*none,nullable*/ gtk_label_get_current_uri (GtkLabel* self /*none*/);
// const char* /*none,nullable*/ gtk_label_get_current_uri (::GtkLabel* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_current_uri () noexcept;

// PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel* self /*none*/);
// ::PangoEllipsizeMode gtk_label_get_ellipsize (::GtkLabel* self /*none*/);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// GMenuModel* /*none,nullable*/ gtk_label_get_extra_menu (GtkLabel* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_label_get_extra_menu (::GtkLabel* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_extra_menu () noexcept;

// GtkJustification gtk_label_get_justify (GtkLabel* self /*none*/);
// ::GtkJustification gtk_label_get_justify (::GtkLabel* self /*none*/);
GI_INLINE_DECL Gtk::Justification get_justify () noexcept;

// const char* /*none*/ gtk_label_get_label (GtkLabel* self /*none*/);
// const char* /*none*/ gtk_label_get_label (::GtkLabel* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// PangoLayout* /*none*/ gtk_label_get_layout (GtkLabel* self /*none*/);
// ::PangoLayout* /*none*/ gtk_label_get_layout (::GtkLabel* self /*none*/);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void gtk_label_get_layout_offsets (GtkLabel* self /*none*/, int* x, int* y);
// void gtk_label_get_layout_offsets (::GtkLabel* self /*none*/, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets (gint * x, gint * y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_layout_offsets () noexcept;

// int gtk_label_get_lines (GtkLabel* self /*none*/);
// gint gtk_label_get_lines (::GtkLabel* self /*none*/);
GI_INLINE_DECL gint get_lines () noexcept;

// int gtk_label_get_max_width_chars (GtkLabel* self /*none*/);
// gint gtk_label_get_max_width_chars (::GtkLabel* self /*none*/);
GI_INLINE_DECL gint get_max_width_chars () noexcept;

// guint gtk_label_get_mnemonic_keyval (GtkLabel* self /*none*/);
// guint gtk_label_get_mnemonic_keyval (::GtkLabel* self /*none*/);
GI_INLINE_DECL guint get_mnemonic_keyval () noexcept;

// GtkWidget* /*none,nullable*/ gtk_label_get_mnemonic_widget (GtkLabel* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_label_get_mnemonic_widget (::GtkLabel* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_mnemonic_widget () noexcept;

// GtkNaturalWrapMode gtk_label_get_natural_wrap_mode (GtkLabel* self /*none*/);
// ::GtkNaturalWrapMode gtk_label_get_natural_wrap_mode (::GtkLabel* self /*none*/);
GI_INLINE_DECL Gtk::NaturalWrapMode get_natural_wrap_mode () noexcept;

// gboolean gtk_label_get_selectable (GtkLabel* self /*none*/);
// gboolean gtk_label_get_selectable (::GtkLabel* self /*none*/);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_label_get_selection_bounds (GtkLabel* self /*none*/, int* start, int* end);
// gboolean gtk_label_get_selection_bounds (::GtkLabel* self /*none*/, gint* start, gint* end);
GI_INLINE_DECL bool get_selection_bounds (gint * start, gint * end) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_selection_bounds () noexcept;

// gboolean gtk_label_get_single_line_mode (GtkLabel* self /*none*/);
// gboolean gtk_label_get_single_line_mode (::GtkLabel* self /*none*/);
GI_INLINE_DECL bool get_single_line_mode () noexcept;

// PangoTabArray* /*full,nullable*/ gtk_label_get_tabs (GtkLabel* self /*none*/);
// ::PangoTabArray* /*full,nullable*/ gtk_label_get_tabs (::GtkLabel* self /*none*/);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// const char* /*none*/ gtk_label_get_text (GtkLabel* self /*none*/);
// const char* /*none*/ gtk_label_get_text (::GtkLabel* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// gboolean gtk_label_get_use_markup (GtkLabel* self /*none*/);
// gboolean gtk_label_get_use_markup (::GtkLabel* self /*none*/);
GI_INLINE_DECL bool get_use_markup () noexcept;

// gboolean gtk_label_get_use_underline (GtkLabel* self /*none*/);
// gboolean gtk_label_get_use_underline (::GtkLabel* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// int gtk_label_get_width_chars (GtkLabel* self /*none*/);
// gint gtk_label_get_width_chars (::GtkLabel* self /*none*/);
GI_INLINE_DECL gint get_width_chars () noexcept;

// gboolean gtk_label_get_wrap (GtkLabel* self /*none*/);
// gboolean gtk_label_get_wrap (::GtkLabel* self /*none*/);
GI_INLINE_DECL bool get_wrap () noexcept;

// PangoWrapMode gtk_label_get_wrap_mode (GtkLabel* self /*none*/);
// ::PangoWrapMode gtk_label_get_wrap_mode (::GtkLabel* self /*none*/);
GI_INLINE_DECL Pango::WrapMode get_wrap_mode () noexcept;

// float gtk_label_get_xalign (GtkLabel* self /*none*/);
// gfloat gtk_label_get_xalign (::GtkLabel* self /*none*/);
GI_INLINE_DECL gfloat get_xalign () noexcept;

// float gtk_label_get_yalign (GtkLabel* self /*none*/);
// gfloat gtk_label_get_yalign (::GtkLabel* self /*none*/);
GI_INLINE_DECL gfloat get_yalign () noexcept;

// void gtk_label_select_region (GtkLabel* self /*none*/, int start_offset, int end_offset);
// void gtk_label_select_region (::GtkLabel* self /*none*/, gint start_offset, gint end_offset);
GI_INLINE_DECL void select_region (gint start_offset, gint end_offset) noexcept;

// void gtk_label_set_attributes (GtkLabel* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_label_set_attributes (::GtkLabel* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_label_set_ellipsize (GtkLabel* self /*none*/, PangoEllipsizeMode mode);
// void gtk_label_set_ellipsize (::GtkLabel* self /*none*/, ::PangoEllipsizeMode mode);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode mode) noexcept;

// void gtk_label_set_extra_menu (GtkLabel* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_label_set_extra_menu (::GtkLabel* self /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_extra_menu (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_extra_menu () noexcept;

// void gtk_label_set_justify (GtkLabel* self /*none*/, GtkJustification jtype);
// void gtk_label_set_justify (::GtkLabel* self /*none*/, ::GtkJustification jtype);
GI_INLINE_DECL void set_justify (Gtk::Justification jtype) noexcept;

// void gtk_label_set_label (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_label (::GtkLabel* self /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_label (const gi::cstring_v str) noexcept;

// void gtk_label_set_lines (GtkLabel* self /*none*/, int lines);
// void gtk_label_set_lines (::GtkLabel* self /*none*/, gint lines);
GI_INLINE_DECL void set_lines (gint lines) noexcept;

// void gtk_label_set_markup (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_markup (::GtkLabel* self /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_markup (const gi::cstring_v str) noexcept;

// void gtk_label_set_markup_with_mnemonic (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_markup_with_mnemonic (::GtkLabel* self /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_markup_with_mnemonic (const gi::cstring_v str) noexcept;

// void gtk_label_set_max_width_chars (GtkLabel* self /*none*/, int n_chars);
// void gtk_label_set_max_width_chars (::GtkLabel* self /*none*/, gint n_chars);
GI_INLINE_DECL void set_max_width_chars (gint n_chars) noexcept;

// void gtk_label_set_mnemonic_widget (GtkLabel* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_label_set_mnemonic_widget (::GtkLabel* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_mnemonic_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_mnemonic_widget () noexcept;

// void gtk_label_set_natural_wrap_mode (GtkLabel* self /*none*/, GtkNaturalWrapMode wrap_mode);
// void gtk_label_set_natural_wrap_mode (::GtkLabel* self /*none*/, ::GtkNaturalWrapMode wrap_mode);
GI_INLINE_DECL void set_natural_wrap_mode (Gtk::NaturalWrapMode wrap_mode) noexcept;

// void gtk_label_set_selectable (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_selectable (::GtkLabel* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_selectable (gboolean setting) noexcept;

// void gtk_label_set_single_line_mode (GtkLabel* self /*none*/, gboolean single_line_mode);
// void gtk_label_set_single_line_mode (::GtkLabel* self /*none*/, gboolean single_line_mode);
GI_INLINE_DECL void set_single_line_mode (gboolean single_line_mode) noexcept;

// void gtk_label_set_tabs (GtkLabel* self /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_label_set_tabs (::GtkLabel* self /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
GI_INLINE_DECL void set_tabs (Pango::TabArray_Ref tabs) noexcept;
GI_INLINE_DECL void set_tabs () noexcept;

// void gtk_label_set_text (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_text (::GtkLabel* self /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_text (const gi::cstring_v str) noexcept;

// void gtk_label_set_text_with_mnemonic (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_text_with_mnemonic (::GtkLabel* self /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_text_with_mnemonic (const gi::cstring_v str) noexcept;

// void gtk_label_set_use_markup (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_use_markup (::GtkLabel* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_use_markup (gboolean setting) noexcept;

// void gtk_label_set_use_underline (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_use_underline (::GtkLabel* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_use_underline (gboolean setting) noexcept;

// void gtk_label_set_width_chars (GtkLabel* self /*none*/, int n_chars);
// void gtk_label_set_width_chars (::GtkLabel* self /*none*/, gint n_chars);
GI_INLINE_DECL void set_width_chars (gint n_chars) noexcept;

// void gtk_label_set_wrap (GtkLabel* self /*none*/, gboolean wrap);
// void gtk_label_set_wrap (::GtkLabel* self /*none*/, gboolean wrap);
GI_INLINE_DECL void set_wrap (gboolean wrap) noexcept;

// void gtk_label_set_wrap_mode (GtkLabel* self /*none*/, PangoWrapMode wrap_mode);
// void gtk_label_set_wrap_mode (::GtkLabel* self /*none*/, ::PangoWrapMode wrap_mode);
GI_INLINE_DECL void set_wrap_mode (Pango::WrapMode wrap_mode) noexcept;

// void gtk_label_set_xalign (GtkLabel* self /*none*/, float xalign);
// void gtk_label_set_xalign (::GtkLabel* self /*none*/, gfloat xalign);
GI_INLINE_DECL void set_xalign (gfloat xalign) noexcept;

// void gtk_label_set_yalign (GtkLabel* self /*none*/, float yalign);
// void gtk_label_set_yalign (::GtkLabel* self /*none*/, gfloat yalign);
GI_INLINE_DECL void set_yalign (gfloat yalign) noexcept;

gi::property_proxy<Pango::AttrList, base::LabelBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::LabelBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::LabelBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::LabelBase> (*this, "attributes"); }

gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> (*this, "ellipsize"); }

gi::property_proxy<Gio::MenuModel, base::LabelBase> property_extra_menu()
{ return gi::property_proxy<Gio::MenuModel, base::LabelBase> (*this, "extra-menu"); }
const gi::property_proxy<Gio::MenuModel, base::LabelBase> property_extra_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::LabelBase> (*this, "extra-menu"); }

gi::property_proxy<Gtk::Justification, base::LabelBase> property_justify()
{ return gi::property_proxy<Gtk::Justification, base::LabelBase> (*this, "justify"); }
const gi::property_proxy<Gtk::Justification, base::LabelBase> property_justify() const
{ return gi::property_proxy<Gtk::Justification, base::LabelBase> (*this, "justify"); }

gi::property_proxy<gi::cstring, base::LabelBase> property_label()
{ return gi::property_proxy<gi::cstring, base::LabelBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::LabelBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::LabelBase> (*this, "label"); }

gi::property_proxy<gint, base::LabelBase> property_lines()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "lines"); }
const gi::property_proxy<gint, base::LabelBase> property_lines() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "lines"); }

gi::property_proxy<gint, base::LabelBase> property_max_width_chars()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "max-width-chars"); }
const gi::property_proxy<gint, base::LabelBase> property_max_width_chars() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "max-width-chars"); }

gi::property_proxy<guint, base::LabelBase> property_mnemonic_keyval()
{ return gi::property_proxy<guint, base::LabelBase> (*this, "mnemonic-keyval"); }
const gi::property_proxy<guint, base::LabelBase> property_mnemonic_keyval() const
{ return gi::property_proxy<guint, base::LabelBase> (*this, "mnemonic-keyval"); }

gi::property_proxy<Gtk::Widget, base::LabelBase> property_mnemonic_widget()
{ return gi::property_proxy<Gtk::Widget, base::LabelBase> (*this, "mnemonic-widget"); }
const gi::property_proxy<Gtk::Widget, base::LabelBase> property_mnemonic_widget() const
{ return gi::property_proxy<Gtk::Widget, base::LabelBase> (*this, "mnemonic-widget"); }

gi::property_proxy<Gtk::NaturalWrapMode, base::LabelBase> property_natural_wrap_mode()
{ return gi::property_proxy<Gtk::NaturalWrapMode, base::LabelBase> (*this, "natural-wrap-mode"); }
const gi::property_proxy<Gtk::NaturalWrapMode, base::LabelBase> property_natural_wrap_mode() const
{ return gi::property_proxy<Gtk::NaturalWrapMode, base::LabelBase> (*this, "natural-wrap-mode"); }

gi::property_proxy<bool, base::LabelBase> property_selectable()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::LabelBase> property_selectable() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "selectable"); }

gi::property_proxy<bool, base::LabelBase> property_single_line_mode()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "single-line-mode"); }
const gi::property_proxy<bool, base::LabelBase> property_single_line_mode() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "single-line-mode"); }

gi::property_proxy<Pango::TabArray, base::LabelBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::LabelBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::LabelBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::LabelBase> (*this, "tabs"); }

gi::property_proxy<bool, base::LabelBase> property_use_markup()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::LabelBase> property_use_markup() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-markup"); }

gi::property_proxy<bool, base::LabelBase> property_use_underline()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::LabelBase> property_use_underline() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-underline"); }

gi::property_proxy<gint, base::LabelBase> property_width_chars()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::LabelBase> property_width_chars() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "width-chars"); }

gi::property_proxy<bool, base::LabelBase> property_wrap()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "wrap"); }
const gi::property_proxy<bool, base::LabelBase> property_wrap() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "wrap"); }

gi::property_proxy<Pango::WrapMode, base::LabelBase> property_wrap_mode()
{ return gi::property_proxy<Pango::WrapMode, base::LabelBase> (*this, "wrap-mode"); }
const gi::property_proxy<Pango::WrapMode, base::LabelBase> property_wrap_mode() const
{ return gi::property_proxy<Pango::WrapMode, base::LabelBase> (*this, "wrap-mode"); }

gi::property_proxy<gfloat, base::LabelBase> property_xalign()
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::LabelBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::LabelBase> property_yalign()
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::LabelBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "yalign"); }

// (signal) void activate-current-link ();
// (signal) void activate-current-link ();
gi::signal_proxy<void(Gtk::Label)> signal_activate_current_link()
{ return gi::signal_proxy<void(Gtk::Label)> (*this, "activate-current-link"); }

// (signal) gboolean activate-link (gchar* uri /*none*/);
// (signal) gboolean activate-link (char* uri /*none*/);
gi::signal_proxy<bool(Gtk::Label, gi::cstring_v uri)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::Label, gi::cstring_v uri)> (*this, "activate-link"); }

// (signal) void copy-clipboard ();
// (signal) void copy-clipboard ();
gi::signal_proxy<void(Gtk::Label)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::Label)> (*this, "copy-clipboard"); }

// (signal) void move-cursor ( step, gint count, gboolean extend_selection);
// (signal) void move-cursor (::GtkMovementStep step, gint count, gboolean extend_selection);
gi::signal_proxy<void(Gtk::Label, Gtk::MovementStep step, gint count, gboolean extend_selection)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::Label, Gtk::MovementStep step, gint count, gboolean extend_selection)> (*this, "move-cursor"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/label_extra_def.hpp>)
#include <gtk/label_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/label_extra.hpp>)
#include <gtk/label_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Label : public GI_GTK_LABEL_BASE
{ typedef GI_GTK_LABEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLabel>
{ typedef Gtk::Label type; }; 

} // namespace repository

} // namespace gi

#endif
