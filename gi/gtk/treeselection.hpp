// AUTO-GENERATED

#ifndef _GI_GTK_TREESELECTION_HPP_
#define _GI_GTK_TREESELECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;
class TreeView;

class TreeSelection;

namespace base {


#define GI_GTK_TREESELECTION_BASE base::TreeSelectionBase
class TreeSelectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeSelection BaseObjectType;

TreeSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_selection_get_type(); } 

// int gtk_tree_selection_count_selected_rows (GtkTreeSelection* selection /*none*/);
// gint gtk_tree_selection_count_selected_rows (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL gint count_selected_rows () noexcept;

// GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection* selection /*none*/);
// ::GtkSelectionMode gtk_tree_selection_get_mode (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL Gtk::SelectionMode get_mode () noexcept;

// FAILURE on gtk_tree_selection_get_select_function; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_selection_get_selected (GtkTreeSelection* selection /*none*/, GtkTreeModel** model /*none,out,opt*/, GtkTreeIter* iter /*none,out,opt,ca*/);
// gboolean gtk_tree_selection_get_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel** model /*none,out,opt*/, ::GtkTreeIter* iter /*none,out,opt,ca*/);
GI_INLINE_DECL bool get_selected (Gtk::TreeModel * model, Gtk::TreeIter * iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreeIter> get_selected () noexcept;

// GList* /*full*/ gtk_tree_selection_get_selected_rows (GtkTreeSelection* selection /*none*/, GtkTreeModel** model /*none,out,opt*/);
// ::GList* /*full*/ gtk_tree_selection_get_selected_rows (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel** model /*none,out,opt*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t> get_selected_rows (Gtk::TreeModel * model) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t>, Gtk::TreeModel> get_selected_rows () noexcept;

// GtkTreeView* /*none*/ gtk_tree_selection_get_tree_view (GtkTreeSelection* selection /*none*/);
// ::GtkTreeView* /*none*/ gtk_tree_selection_get_tree_view (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL Gtk::TreeView get_tree_view () noexcept;

// gpointer gtk_tree_selection_get_user_data (GtkTreeSelection* selection /*none*/);
// void* gtk_tree_selection_get_user_data (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// gboolean gtk_tree_selection_iter_is_selected (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_selection_iter_is_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_is_selected (Gtk::TreeIter_Ref iter) noexcept;

// gboolean gtk_tree_selection_path_is_selected (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_selection_path_is_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool path_is_selected (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_selection_select_all (GtkTreeSelection* selection /*none*/);
// void gtk_tree_selection_select_all (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_tree_selection_select_iter (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_selection_select_iter (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void select_iter (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_selection_select_path (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_selection_select_path (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void select_path (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_selection_select_range (GtkTreeSelection* selection /*none*/, GtkTreePath* start_path /*none*/, GtkTreePath* end_path /*none*/);
// void gtk_tree_selection_select_range (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* start_path /*none*/, ::GtkTreePath* end_path /*none*/);
GI_INLINE_DECL void select_range (Gtk::TreePath_Ref start_path, Gtk::TreePath_Ref end_path) noexcept;

// void gtk_tree_selection_selected_foreach (GtkTreeSelection* selection /*none*/, GtkTreeSelectionForeachFunc func /*none*/, gpointer data);
// void gtk_tree_selection_selected_foreach (::GtkTreeSelection* selection /*none*/, Gtk::TreeSelectionForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::TreeSelectionForeachFunc func) noexcept;

// void gtk_tree_selection_set_mode (GtkTreeSelection* selection /*none*/, GtkSelectionMode type);
// void gtk_tree_selection_set_mode (::GtkTreeSelection* selection /*none*/, ::GtkSelectionMode type);
GI_INLINE_DECL void set_mode (Gtk::SelectionMode type) noexcept;

// void gtk_tree_selection_set_select_function (GtkTreeSelection* selection /*none*/, GtkTreeSelectionFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// void gtk_tree_selection_set_select_function (::GtkTreeSelection* selection /*none*/, Gtk::TreeSelectionFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_select_function (Gtk::TreeSelectionFunc func) noexcept;

// void gtk_tree_selection_unselect_all (GtkTreeSelection* selection /*none*/);
// void gtk_tree_selection_unselect_all (::GtkTreeSelection* selection /*none*/);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_tree_selection_unselect_iter (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_selection_unselect_iter (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void unselect_iter (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_selection_unselect_path (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_selection_unselect_path (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void unselect_path (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_selection_unselect_range (GtkTreeSelection* selection /*none*/, GtkTreePath* start_path /*none*/, GtkTreePath* end_path /*none*/);
// void gtk_tree_selection_unselect_range (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* start_path /*none*/, ::GtkTreePath* end_path /*none*/);
GI_INLINE_DECL void unselect_range (Gtk::TreePath_Ref start_path, Gtk::TreePath_Ref end_path) noexcept;

gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> property_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> (*this, "mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> property_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> (*this, "mode"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::TreeSelection)> signal_changed()
{ return gi::signal_proxy<void(Gtk::TreeSelection)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_def.hpp>)
#include <gtk/treeselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra.hpp>)
#include <gtk/treeselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeSelection : public GI_GTK_TREESELECTION_BASE
{ typedef GI_GTK_TREESELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeSelection>
{ typedef Gtk::TreeSelection type; }; 

} // namespace repository

} // namespace gi

#endif
