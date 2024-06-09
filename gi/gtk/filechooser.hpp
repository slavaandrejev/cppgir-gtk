// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSER_HPP_
#define _GI_GTK_FILECHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class FileFilter;

class FileChooser;

namespace base {


#define GI_GTK_FILECHOOSER_BASE base::FileChooserBase
class FileChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkFileChooser BaseObjectType;

FileChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_get_type(); } 

// void gtk_file_chooser_add_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* label /*none*/, const char** options /*none,nullable*/, const char** option_labels /*none,nullable*/);
// void gtk_file_chooser_add_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* label /*none*/, const char** options /*none,nullable*/, const char** option_labels /*none,nullable*/);
GI_INLINE_DECL void add_choice (const gi::cstring_v id, const gi::cstring_v label, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> options, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_labels) noexcept;

// void gtk_file_chooser_add_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_add_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL void add_filter (Gtk::FileFilter filter) noexcept;

// gboolean gtk_file_chooser_add_shortcut_folder (GtkFileChooser* chooser /*none*/, GFile* folder /*none*/, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder (::GtkFileChooser* chooser /*none*/, ::GFile* folder /*none*/, GError ** error);
GI_INLINE_DECL bool add_shortcut_folder (Gio::File folder);
GI_INLINE_DECL bool add_shortcut_folder (Gio::File folder, GLib::Error * _error) noexcept;

// GtkFileChooserAction gtk_file_chooser_get_action (GtkFileChooser* chooser /*none*/);
// ::GtkFileChooserAction gtk_file_chooser_get_action (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gtk::FileChooserAction get_action () noexcept;

// const char* /*none,nullable*/ gtk_file_chooser_get_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/);
// const char* /*none,nullable*/ gtk_file_chooser_get_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/);
GI_INLINE_DECL gi::cstring_v get_choice (const gi::cstring_v id) noexcept;

// gboolean gtk_file_chooser_get_create_folders (GtkFileChooser* chooser /*none*/);
// gboolean gtk_file_chooser_get_create_folders (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL bool get_create_folders () noexcept;

// GFile* /*full,nullable*/ gtk_file_chooser_get_current_folder (GtkFileChooser* chooser /*none*/);
// ::GFile* /*full,nullable*/ gtk_file_chooser_get_current_folder (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gio::File get_current_folder () noexcept;

// char* /*full,nullable*/ gtk_file_chooser_get_current_name (GtkFileChooser* chooser /*none*/);
// char* /*full,nullable*/ gtk_file_chooser_get_current_name (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL gi::cstring get_current_name () noexcept;

// GFile* /*full,nullable*/ gtk_file_chooser_get_file (GtkFileChooser* chooser /*none*/);
// ::GFile* /*full,nullable*/ gtk_file_chooser_get_file (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// GListModel* /*full*/ gtk_file_chooser_get_files (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_files (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gio::ListModel get_files () noexcept;

// GtkFileFilter* /*none,nullable*/ gtk_file_chooser_get_filter (GtkFileChooser* chooser /*none*/);
// ::GtkFileFilter* /*none,nullable*/ gtk_file_chooser_get_filter (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gtk::FileFilter get_filter () noexcept;

// GListModel* /*full*/ gtk_file_chooser_get_filters (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_filters (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gio::ListModel get_filters () noexcept;

// gboolean gtk_file_chooser_get_select_multiple (GtkFileChooser* chooser /*none*/);
// gboolean gtk_file_chooser_get_select_multiple (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL bool get_select_multiple () noexcept;

// GListModel* /*full*/ gtk_file_chooser_get_shortcut_folders (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_shortcut_folders (::GtkFileChooser* chooser /*none*/);
GI_INLINE_DECL Gio::ListModel get_shortcut_folders () noexcept;

// void gtk_file_chooser_remove_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/);
// void gtk_file_chooser_remove_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/);
GI_INLINE_DECL void remove_choice (const gi::cstring_v id) noexcept;

// void gtk_file_chooser_remove_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_remove_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL void remove_filter (Gtk::FileFilter filter) noexcept;

// gboolean gtk_file_chooser_remove_shortcut_folder (GtkFileChooser* chooser /*none*/, GFile* folder /*none*/, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder (::GtkFileChooser* chooser /*none*/, ::GFile* folder /*none*/, GError ** error);
GI_INLINE_DECL bool remove_shortcut_folder (Gio::File folder);
GI_INLINE_DECL bool remove_shortcut_folder (Gio::File folder, GLib::Error * _error) noexcept;

// void gtk_file_chooser_set_action (GtkFileChooser* chooser /*none*/, GtkFileChooserAction action);
// void gtk_file_chooser_set_action (::GtkFileChooser* chooser /*none*/, ::GtkFileChooserAction action);
GI_INLINE_DECL void set_action (Gtk::FileChooserAction action) noexcept;

// void gtk_file_chooser_set_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* option /*none*/);
// void gtk_file_chooser_set_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* option /*none*/);
GI_INLINE_DECL void set_choice (const gi::cstring_v id, const gi::cstring_v option) noexcept;

// void gtk_file_chooser_set_create_folders (GtkFileChooser* chooser /*none*/, gboolean create_folders);
// void gtk_file_chooser_set_create_folders (::GtkFileChooser* chooser /*none*/, gboolean create_folders);
GI_INLINE_DECL void set_create_folders (gboolean create_folders) noexcept;

// gboolean gtk_file_chooser_set_current_folder (GtkFileChooser* chooser /*none*/, GFile* file /*none,nullable*/, GError ** error);
// gboolean gtk_file_chooser_set_current_folder (::GtkFileChooser* chooser /*none*/, ::GFile* file /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_current_folder (Gio::File file);
GI_INLINE_DECL bool set_current_folder ();
GI_INLINE_DECL bool set_current_folder (Gio::File file, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_current_folder (GLib::Error * _error) noexcept;

// void gtk_file_chooser_set_current_name (GtkFileChooser* chooser /*none*/, const char* name /*none*/);
// void gtk_file_chooser_set_current_name (::GtkFileChooser* chooser /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_current_name (const gi::cstring_v name) noexcept;

// gboolean gtk_file_chooser_set_file (GtkFileChooser* chooser /*none*/, GFile* file /*none*/, GError ** error);
// gboolean gtk_file_chooser_set_file (::GtkFileChooser* chooser /*none*/, ::GFile* file /*none*/, GError ** error);
GI_INLINE_DECL bool set_file (Gio::File file);
GI_INLINE_DECL bool set_file (Gio::File file, GLib::Error * _error) noexcept;

// void gtk_file_chooser_set_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_set_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL void set_filter (Gtk::FileFilter filter) noexcept;

// void gtk_file_chooser_set_select_multiple (GtkFileChooser* chooser /*none*/, gboolean select_multiple);
// void gtk_file_chooser_set_select_multiple (::GtkFileChooser* chooser /*none*/, gboolean select_multiple);
GI_INLINE_DECL void set_select_multiple (gboolean select_multiple) noexcept;

gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> property_action()
{ return gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> (*this, "action"); }
const gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> property_action() const
{ return gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> (*this, "action"); }

gi::property_proxy<bool, base::FileChooserBase> property_create_folders()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "create-folders"); }
const gi::property_proxy<bool, base::FileChooserBase> property_create_folders() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "create-folders"); }

gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> property_filter()
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> (*this, "filter"); }
const gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> property_filter() const
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> (*this, "filter"); }

gi::property_proxy<Gio::ListModel, base::FileChooserBase> property_filters()
{ return gi::property_proxy<Gio::ListModel, base::FileChooserBase> (*this, "filters"); }
const gi::property_proxy<Gio::ListModel, base::FileChooserBase> property_filters() const
{ return gi::property_proxy<Gio::ListModel, base::FileChooserBase> (*this, "filters"); }

gi::property_proxy<bool, base::FileChooserBase> property_select_multiple()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "select-multiple"); }
const gi::property_proxy<bool, base::FileChooserBase> property_select_multiple() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "select-multiple"); }

gi::property_proxy<Gio::ListModel, base::FileChooserBase> property_shortcut_folders()
{ return gi::property_proxy<Gio::ListModel, base::FileChooserBase> (*this, "shortcut-folders"); }
const gi::property_proxy<Gio::ListModel, base::FileChooserBase> property_shortcut_folders() const
{ return gi::property_proxy<Gio::ListModel, base::FileChooserBase> (*this, "shortcut-folders"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_def.hpp>)
#include <gtk/filechooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra.hpp>)
#include <gtk/filechooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooser : public GI_GTK_FILECHOOSER_BASE
{ typedef GI_GTK_FILECHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooser>
{ typedef Gtk::FileChooser type; }; 

} // namespace repository

} // namespace gi

#endif
