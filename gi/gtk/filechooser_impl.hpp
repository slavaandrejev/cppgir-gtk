// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSER_IMPL_HPP_
#define _GI_GTK_FILECHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_file_chooser_add_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* label /*none*/, const char** options /*none,nullable*/, const char** option_labels /*none,nullable*/);
// void gtk_file_chooser_add_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* label /*none*/, const char** options /*none,nullable*/, const char** option_labels /*none,nullable*/);
void base::FileChooserBase::add_choice (const gi::cstring_v id, const gi::cstring_v label, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> options, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_labels) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_add_choice;
  auto option_labels_w = unwrap (std::move(option_labels), gi::transfer_none);
  auto option_labels_to_c = option_labels_w;
  auto options_w = unwrap (std::move(options), gi::transfer_none);
  auto options_to_c = options_w;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c), (const char*) (label_to_c), (const char**) (options_to_c), (const char**) (option_labels_to_c));
}

// void gtk_file_chooser_add_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_add_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
void base::FileChooserBase::add_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_add_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// gboolean gtk_file_chooser_add_shortcut_folder (GtkFileChooser* chooser /*none*/, GFile* folder /*none*/, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder (::GtkFileChooser* chooser /*none*/, ::GFile* folder /*none*/, GError ** error);
bool base::FileChooserBase::add_shortcut_folder (Gio::File folder)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_add_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (folder_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::add_shortcut_folder (Gio::File folder, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_add_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (folder_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GtkFileChooserAction gtk_file_chooser_get_action (GtkFileChooser* chooser /*none*/);
// ::GtkFileChooserAction gtk_file_chooser_get_action (::GtkFileChooser* chooser /*none*/);
Gtk::FileChooserAction base::FileChooserBase::get_action () noexcept
{
  typedef ::GtkFileChooserAction (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_action;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ gtk_file_chooser_get_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/);
// const char* /*none,nullable*/ gtk_file_chooser_get_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/);
gi::cstring_v base::FileChooserBase::get_choice (const gi::cstring_v id) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooser* chooser, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_choice;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_file_chooser_get_create_folders (GtkFileChooser* chooser /*none*/);
// gboolean gtk_file_chooser_get_create_folders (::GtkFileChooser* chooser /*none*/);
bool base::FileChooserBase::get_create_folders () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_create_folders;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// GFile* /*full,nullable*/ gtk_file_chooser_get_current_folder (GtkFileChooser* chooser /*none*/);
// ::GFile* /*full,nullable*/ gtk_file_chooser_get_current_folder (::GtkFileChooser* chooser /*none*/);
Gio::File base::FileChooserBase::get_current_folder () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_current_folder;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ gtk_file_chooser_get_current_name (GtkFileChooser* chooser /*none*/);
// char* /*full,nullable*/ gtk_file_chooser_get_current_name (::GtkFileChooser* chooser /*none*/);
gi::cstring base::FileChooserBase::get_current_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_current_name;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ gtk_file_chooser_get_file (GtkFileChooser* chooser /*none*/);
// ::GFile* /*full,nullable*/ gtk_file_chooser_get_file (::GtkFileChooser* chooser /*none*/);
Gio::File base::FileChooserBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_file;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*full*/ gtk_file_chooser_get_files (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_files (::GtkFileChooser* chooser /*none*/);
Gio::ListModel base::FileChooserBase::get_files () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_files;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFileFilter* /*none,nullable*/ gtk_file_chooser_get_filter (GtkFileChooser* chooser /*none*/);
// ::GtkFileFilter* /*none,nullable*/ gtk_file_chooser_get_filter (::GtkFileChooser* chooser /*none*/);
Gtk::FileFilter base::FileChooserBase::get_filter () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_filter;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ gtk_file_chooser_get_filters (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_filters (::GtkFileChooser* chooser /*none*/);
Gio::ListModel base::FileChooserBase::get_filters () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_filters;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_file_chooser_get_select_multiple (GtkFileChooser* chooser /*none*/);
// gboolean gtk_file_chooser_get_select_multiple (::GtkFileChooser* chooser /*none*/);
bool base::FileChooserBase::get_select_multiple () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_select_multiple;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// GListModel* /*full*/ gtk_file_chooser_get_shortcut_folders (GtkFileChooser* chooser /*none*/);
// ::GListModel* /*full*/ gtk_file_chooser_get_shortcut_folders (::GtkFileChooser* chooser /*none*/);
Gio::ListModel base::FileChooserBase::get_shortcut_folders () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_get_shortcut_folders;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_chooser_remove_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/);
// void gtk_file_chooser_remove_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/);
void base::FileChooserBase::remove_choice (const gi::cstring_v id) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_remove_choice;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c));
}

// void gtk_file_chooser_remove_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_remove_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
void base::FileChooserBase::remove_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_remove_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// gboolean gtk_file_chooser_remove_shortcut_folder (GtkFileChooser* chooser /*none*/, GFile* folder /*none*/, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder (::GtkFileChooser* chooser /*none*/, ::GFile* folder /*none*/, GError ** error);
bool base::FileChooserBase::remove_shortcut_folder (Gio::File folder)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_remove_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (folder_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::remove_shortcut_folder (Gio::File folder, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_remove_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (folder_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_file_chooser_set_action (GtkFileChooser* chooser /*none*/, GtkFileChooserAction action);
// void gtk_file_chooser_set_action (::GtkFileChooser* chooser /*none*/, ::GtkFileChooserAction action);
void base::FileChooserBase::set_action (Gtk::FileChooserAction action) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileChooserAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_action;
  auto action_to_c = gi::unwrap (action);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileChooserAction) (action_to_c));
}

// void gtk_file_chooser_set_choice (GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* option /*none*/);
// void gtk_file_chooser_set_choice (::GtkFileChooser* chooser /*none*/, const char* id /*none*/, const char* option /*none*/);
void base::FileChooserBase::set_choice (const gi::cstring_v id, const gi::cstring_v option) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id, const char* option);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_choice;
  auto option_to_c = gi::unwrap (option, gi::transfer_none);
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c), (const char*) (option_to_c));
}

// void gtk_file_chooser_set_create_folders (GtkFileChooser* chooser /*none*/, gboolean create_folders);
// void gtk_file_chooser_set_create_folders (::GtkFileChooser* chooser /*none*/, gboolean create_folders);
void base::FileChooserBase::set_create_folders (gboolean create_folders) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean create_folders);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_create_folders;
  auto create_folders_to_c = create_folders;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (create_folders_to_c));
}

// gboolean gtk_file_chooser_set_current_folder (GtkFileChooser* chooser /*none*/, GFile* file /*none,nullable*/, GError ** error);
// gboolean gtk_file_chooser_set_current_folder (::GtkFileChooser* chooser /*none*/, ::GFile* file /*none,nullable*/, GError ** error);
bool base::FileChooserBase::set_current_folder (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_current_folder;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::set_current_folder ()
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_current_folder;
  auto file_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::set_current_folder (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_current_folder;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileChooserBase::set_current_folder (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_current_folder;
  auto file_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_file_chooser_set_current_name (GtkFileChooser* chooser /*none*/, const char* name /*none*/);
// void gtk_file_chooser_set_current_name (::GtkFileChooser* chooser /*none*/, const char* name /*none*/);
void base::FileChooserBase::set_current_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_current_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (name_to_c));
}

// gboolean gtk_file_chooser_set_file (GtkFileChooser* chooser /*none*/, GFile* file /*none*/, GError ** error);
// gboolean gtk_file_chooser_set_file (::GtkFileChooser* chooser /*none*/, ::GFile* file /*none*/, GError ** error);
bool base::FileChooserBase::set_file (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::set_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_file_chooser_set_filter (GtkFileChooser* chooser /*none*/, GtkFileFilter* filter /*none*/);
// void gtk_file_chooser_set_filter (::GtkFileChooser* chooser /*none*/, ::GtkFileFilter* filter /*none*/);
void base::FileChooserBase::set_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// void gtk_file_chooser_set_select_multiple (GtkFileChooser* chooser /*none*/, gboolean select_multiple);
// void gtk_file_chooser_set_select_multiple (::GtkFileChooser* chooser /*none*/, gboolean select_multiple);
void base::FileChooserBase::set_select_multiple (gboolean select_multiple) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean select_multiple);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_set_select_multiple;
  auto select_multiple_to_c = select_multiple;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (select_multiple_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_def_impl.hpp>)
#include <gtk/filechooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_impl.hpp>)
#include <gtk/filechooser_extra_impl.hpp>
#endif
#endif

#endif
