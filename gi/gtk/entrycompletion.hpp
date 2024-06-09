// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYCOMPLETION_HPP_
#define _GI_GTK_ENTRYCOMPLETION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class CellArea;
class CellLayout;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class Widget;

class EntryCompletion;

namespace base {


#define GI_GTK_ENTRYCOMPLETION_BASE base::EntryCompletionBase
class EntryCompletionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEntryCompletion BaseObjectType;

EntryCompletionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_completion_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// GtkEntryCompletion* /*full*/ gtk_entry_completion_new ();
// ::GtkEntryCompletion* /*full*/ gtk_entry_completion_new ();
static GI_INLINE_DECL Gtk::EntryCompletion new_ () noexcept;

// GtkEntryCompletion* /*full*/ gtk_entry_completion_new_with_area (GtkCellArea* area /*none*/);
// ::GtkEntryCompletion* /*full*/ gtk_entry_completion_new_with_area (::GtkCellArea* area /*none*/);
static GI_INLINE_DECL Gtk::EntryCompletion new_with_area (Gtk::CellArea area) noexcept;

// void gtk_entry_completion_complete (GtkEntryCompletion* completion /*none*/);
// void gtk_entry_completion_complete (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL void complete () noexcept;

// char* /*full,nullable*/ gtk_entry_completion_compute_prefix (GtkEntryCompletion* completion /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ gtk_entry_completion_compute_prefix (::GtkEntryCompletion* completion /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring compute_prefix (const gi::cstring_v key) noexcept;

// const char* /*none,nullable*/ gtk_entry_completion_get_completion_prefix (GtkEntryCompletion* completion /*none*/);
// const char* /*none,nullable*/ gtk_entry_completion_get_completion_prefix (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL gi::cstring_v get_completion_prefix () noexcept;

// GtkWidget* /*none*/ gtk_entry_completion_get_entry (GtkEntryCompletion* completion /*none*/);
// ::GtkWidget* /*none*/ gtk_entry_completion_get_entry (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL Gtk::Widget get_entry () noexcept;

// gboolean gtk_entry_completion_get_inline_completion (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_inline_completion (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL bool get_inline_completion () noexcept;

// gboolean gtk_entry_completion_get_inline_selection (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_inline_selection (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL bool get_inline_selection () noexcept;

// int gtk_entry_completion_get_minimum_key_length (GtkEntryCompletion* completion /*none*/);
// gint gtk_entry_completion_get_minimum_key_length (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL gint get_minimum_key_length () noexcept;

// GtkTreeModel* /*none,nullable*/ gtk_entry_completion_get_model (GtkEntryCompletion* completion /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_entry_completion_get_model (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// gboolean gtk_entry_completion_get_popup_completion (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_completion (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL bool get_popup_completion () noexcept;

// gboolean gtk_entry_completion_get_popup_set_width (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_set_width (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL bool get_popup_set_width () noexcept;

// gboolean gtk_entry_completion_get_popup_single_match (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_single_match (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL bool get_popup_single_match () noexcept;

// int gtk_entry_completion_get_text_column (GtkEntryCompletion* completion /*none*/);
// gint gtk_entry_completion_get_text_column (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL gint get_text_column () noexcept;

// void gtk_entry_completion_insert_prefix (GtkEntryCompletion* completion /*none*/);
// void gtk_entry_completion_insert_prefix (::GtkEntryCompletion* completion /*none*/);
GI_INLINE_DECL void insert_prefix () noexcept;

// void gtk_entry_completion_set_inline_completion (GtkEntryCompletion* completion /*none*/, gboolean inline_completion);
// void gtk_entry_completion_set_inline_completion (::GtkEntryCompletion* completion /*none*/, gboolean inline_completion);
GI_INLINE_DECL void set_inline_completion (gboolean inline_completion) noexcept;

// void gtk_entry_completion_set_inline_selection (GtkEntryCompletion* completion /*none*/, gboolean inline_selection);
// void gtk_entry_completion_set_inline_selection (::GtkEntryCompletion* completion /*none*/, gboolean inline_selection);
GI_INLINE_DECL void set_inline_selection (gboolean inline_selection) noexcept;

// void gtk_entry_completion_set_match_func (GtkEntryCompletion* completion /*none*/, GtkEntryCompletionMatchFunc func /*none*/, gpointer func_data, GDestroyNotify func_notify /*none*/);
// void gtk_entry_completion_set_match_func (::GtkEntryCompletion* completion /*none*/, Gtk::EntryCompletionMatchFunc::cfunction_type func /*none*/, void* func_data, GLib::DestroyNotify::cfunction_type func_notify /*none*/);
GI_INLINE_DECL void set_match_func (Gtk::EntryCompletionMatchFunc func) noexcept;

// void gtk_entry_completion_set_minimum_key_length (GtkEntryCompletion* completion /*none*/, int length);
// void gtk_entry_completion_set_minimum_key_length (::GtkEntryCompletion* completion /*none*/, gint length);
GI_INLINE_DECL void set_minimum_key_length (gint length) noexcept;

// void gtk_entry_completion_set_model (GtkEntryCompletion* completion /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_entry_completion_set_model (::GtkEntryCompletion* completion /*none*/, ::GtkTreeModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_entry_completion_set_popup_completion (GtkEntryCompletion* completion /*none*/, gboolean popup_completion);
// void gtk_entry_completion_set_popup_completion (::GtkEntryCompletion* completion /*none*/, gboolean popup_completion);
GI_INLINE_DECL void set_popup_completion (gboolean popup_completion) noexcept;

// void gtk_entry_completion_set_popup_set_width (GtkEntryCompletion* completion /*none*/, gboolean popup_set_width);
// void gtk_entry_completion_set_popup_set_width (::GtkEntryCompletion* completion /*none*/, gboolean popup_set_width);
GI_INLINE_DECL void set_popup_set_width (gboolean popup_set_width) noexcept;

// void gtk_entry_completion_set_popup_single_match (GtkEntryCompletion* completion /*none*/, gboolean popup_single_match);
// void gtk_entry_completion_set_popup_single_match (::GtkEntryCompletion* completion /*none*/, gboolean popup_single_match);
GI_INLINE_DECL void set_popup_single_match (gboolean popup_single_match) noexcept;

// void gtk_entry_completion_set_text_column (GtkEntryCompletion* completion /*none*/, int column);
// void gtk_entry_completion_set_text_column (::GtkEntryCompletion* completion /*none*/, gint column);
GI_INLINE_DECL void set_text_column (gint column) noexcept;

gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> (*this, "cell-area"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_inline_completion()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-completion"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_inline_completion() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-completion"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_inline_selection()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-selection"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_inline_selection() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-selection"); }

gi::property_proxy<gint, base::EntryCompletionBase> property_minimum_key_length()
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "minimum-key-length"); }
const gi::property_proxy<gint, base::EntryCompletionBase> property_minimum_key_length() const
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "minimum-key-length"); }

gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> (*this, "model"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_completion()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-completion"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_completion() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-completion"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_set_width()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-set-width"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_set_width() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-set-width"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_single_match()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-single-match"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_single_match() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-single-match"); }

gi::property_proxy<gint, base::EntryCompletionBase> property_text_column()
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "text-column"); }
const gi::property_proxy<gint, base::EntryCompletionBase> property_text_column() const
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "text-column"); }

// (signal) gboolean cursor-on-match ( model /*none*/,  iter /*none*/);
// (signal) gboolean cursor-on-match (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/);
gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter_Ref iter)> signal_cursor_on_match()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter_Ref iter)> (*this, "cursor-on-match"); }

// (signal) gboolean insert-prefix (gchar* prefix /*none*/);
// (signal) gboolean insert-prefix (char* prefix /*none*/);
gi::signal_proxy<bool(Gtk::EntryCompletion, gi::cstring_v prefix)> signal_insert_prefix()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, gi::cstring_v prefix)> (*this, "insert-prefix"); }

// (signal) gboolean match-selected ( model /*none*/,  iter /*none*/);
// (signal) gboolean match-selected (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/);
gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter_Ref iter)> signal_match_selected()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter_Ref iter)> (*this, "match-selected"); }

// (signal) void no-matches ();
// (signal) void no-matches ();
gi::signal_proxy<void(Gtk::EntryCompletion)> signal_no_matches()
{ return gi::signal_proxy<void(Gtk::EntryCompletion)> (*this, "no-matches"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_def.hpp>)
#include <gtk/entrycompletion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra.hpp>)
#include <gtk/entrycompletion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EntryCompletion : public GI_GTK_ENTRYCOMPLETION_BASE
{ typedef GI_GTK_ENTRYCOMPLETION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntryCompletion>
{ typedef Gtk::EntryCompletion type; }; 

} // namespace repository

} // namespace gi

#endif
