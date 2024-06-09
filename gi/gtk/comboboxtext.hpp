// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOXTEXT_HPP_
#define _GI_GTK_COMBOBOXTEXT_HPP_

#include "combobox.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ComboBoxText;

namespace base {


#define GI_GTK_COMBOBOXTEXT_BASE base::ComboBoxTextBase
class ComboBoxTextBase : public Gtk::ComboBox
{
typedef Gtk::ComboBox super_type;
public:
typedef ::GtkComboBoxText BaseObjectType;

ComboBoxTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_combo_box_text_get_type(); } 

// GtkWidget* /*none*/ gtk_combo_box_text_new ();
// ::GtkComboBoxText* /*none*/ gtk_combo_box_text_new ();
static GI_INLINE_DECL Gtk::ComboBoxText new_ () noexcept;

// GtkWidget* /*none*/ gtk_combo_box_text_new_with_entry ();
// ::GtkComboBoxText* /*none*/ gtk_combo_box_text_new_with_entry ();
static GI_INLINE_DECL Gtk::ComboBoxText new_with_entry () noexcept;

// void gtk_combo_box_text_append (GtkComboBoxText* combo_box /*none*/, const char* id /*none,nullable*/, const char* text /*none*/);
// void gtk_combo_box_text_append (::GtkComboBoxText* combo_box /*none*/, const char* id /*none,nullable*/, const char* text /*none*/);
GI_INLINE_DECL void append (const gi::cstring_v id, const gi::cstring_v text) noexcept;
GI_INLINE_DECL void append (const gi::cstring_v text) noexcept;

// void gtk_combo_box_text_append_text (GtkComboBoxText* combo_box /*none*/, const char* text /*none*/);
// void gtk_combo_box_text_append_text (::GtkComboBoxText* combo_box /*none*/, const char* text /*none*/);
GI_INLINE_DECL void append_text (const gi::cstring_v text) noexcept;

// char* /*full,nullable*/ gtk_combo_box_text_get_active_text (GtkComboBoxText* combo_box /*none*/);
// char* /*full,nullable*/ gtk_combo_box_text_get_active_text (::GtkComboBoxText* combo_box /*none*/);
GI_INLINE_DECL gi::cstring get_active_text () noexcept;

// void gtk_combo_box_text_insert (GtkComboBoxText* combo_box /*none*/, int position, const char* id /*none,nullable*/, const char* text /*none*/);
// void gtk_combo_box_text_insert (::GtkComboBoxText* combo_box /*none*/, gint position, const char* id /*none,nullable*/, const char* text /*none*/);
GI_INLINE_DECL void insert (gint position, const gi::cstring_v id, const gi::cstring_v text) noexcept;
GI_INLINE_DECL void insert (gint position, const gi::cstring_v text) noexcept;

// void gtk_combo_box_text_insert_text (GtkComboBoxText* combo_box /*none*/, int position, const char* text /*none*/);
// void gtk_combo_box_text_insert_text (::GtkComboBoxText* combo_box /*none*/, gint position, const char* text /*none*/);
GI_INLINE_DECL void insert_text (gint position, const gi::cstring_v text) noexcept;

// void gtk_combo_box_text_prepend (GtkComboBoxText* combo_box /*none*/, const char* id /*none,nullable*/, const char* text /*none*/);
// void gtk_combo_box_text_prepend (::GtkComboBoxText* combo_box /*none*/, const char* id /*none,nullable*/, const char* text /*none*/);
GI_INLINE_DECL void prepend (const gi::cstring_v id, const gi::cstring_v text) noexcept;
GI_INLINE_DECL void prepend (const gi::cstring_v text) noexcept;

// void gtk_combo_box_text_prepend_text (GtkComboBoxText* combo_box /*none*/, const char* text /*none*/);
// void gtk_combo_box_text_prepend_text (::GtkComboBoxText* combo_box /*none*/, const char* text /*none*/);
GI_INLINE_DECL void prepend_text (const gi::cstring_v text) noexcept;

// void gtk_combo_box_text_remove (GtkComboBoxText* combo_box /*none*/, int position);
// void gtk_combo_box_text_remove (::GtkComboBoxText* combo_box /*none*/, gint position);
GI_INLINE_DECL void remove (gint position) noexcept;

// void gtk_combo_box_text_remove_all (GtkComboBoxText* combo_box /*none*/);
// void gtk_combo_box_text_remove_all (::GtkComboBoxText* combo_box /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra_def.hpp>)
#include <gtk/comboboxtext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra.hpp>)
#include <gtk/comboboxtext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ComboBoxText : public GI_GTK_COMBOBOXTEXT_BASE
{ typedef GI_GTK_COMBOBOXTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkComboBoxText>
{ typedef Gtk::ComboBoxText type; }; 

} // namespace repository

} // namespace gi

#endif
