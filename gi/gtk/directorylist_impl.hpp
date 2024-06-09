// AUTO-GENERATED

#ifndef _GI_GTK_DIRECTORYLIST_IMPL_HPP_
#define _GI_GTK_DIRECTORYLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel DirectoryListBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DirectoryListBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GtkDirectoryList* /*full*/ gtk_directory_list_new (const char* attributes /*none,nullable*/, GFile* file /*none,nullable*/);
// ::GtkDirectoryList* /*full*/ gtk_directory_list_new (const char* attributes /*none,nullable*/, ::GFile* file /*none,nullable*/);
Gtk::DirectoryList base::DirectoryListBase::new_ (const gi::cstring_v attributes, Gio::File file) noexcept
{
  typedef ::GtkDirectoryList* (*call_wrap_t) (const char* attributes, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_directory_list_new;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (attributes_to_c), (::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::DirectoryList base::DirectoryListBase::new_ () noexcept
{
  typedef ::GtkDirectoryList* (*call_wrap_t) (const char* attributes, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_directory_list_new;
  auto file_to_c = nullptr;
  auto attributes_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (attributes_to_c), (::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_directory_list_get_attributes (GtkDirectoryList* self /*none*/);
// const char* /*none,nullable*/ gtk_directory_list_get_attributes (::GtkDirectoryList* self /*none*/);
gi::cstring_v base::DirectoryListBase::get_attributes () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GError* /*none,nullable*/ gtk_directory_list_get_error (GtkDirectoryList* self /*none*/);
// const ::GError* /*none,nullable*/ gtk_directory_list_get_error (::GtkDirectoryList* self /*none*/);
GLib::Error_Ref base::DirectoryListBase::get_error () noexcept
{
  typedef const ::GError* (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_get_error;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFile* /*none,nullable*/ gtk_directory_list_get_file (GtkDirectoryList* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_directory_list_get_file (::GtkDirectoryList* self /*none*/);
Gio::File base::DirectoryListBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_get_file;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_directory_list_get_io_priority (GtkDirectoryList* self /*none*/);
// gint gtk_directory_list_get_io_priority (::GtkDirectoryList* self /*none*/);
gint base::DirectoryListBase::get_io_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_get_io_priority;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_directory_list_get_monitored (GtkDirectoryList* self /*none*/);
// gboolean gtk_directory_list_get_monitored (::GtkDirectoryList* self /*none*/);
bool base::DirectoryListBase::get_monitored () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_get_monitored;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_directory_list_is_loading (GtkDirectoryList* self /*none*/);
// gboolean gtk_directory_list_is_loading (::GtkDirectoryList* self /*none*/);
bool base::DirectoryListBase::is_loading () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDirectoryList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_is_loading;
  auto _temp_ret = call_wrap_v ((::GtkDirectoryList*) (gobj_()));
  return _temp_ret;
}

// void gtk_directory_list_set_attributes (GtkDirectoryList* self /*none*/, const char* attributes /*none,nullable*/);
// void gtk_directory_list_set_attributes (::GtkDirectoryList* self /*none*/, const char* attributes /*none,nullable*/);
void base::DirectoryListBase::set_attributes (const gi::cstring_v attributes) noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_attributes;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (const char*) (attributes_to_c));
}
void base::DirectoryListBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_attributes;
  auto attributes_to_c = nullptr;
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (const char*) (attributes_to_c));
}

// void gtk_directory_list_set_file (GtkDirectoryList* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_directory_list_set_file (::GtkDirectoryList* self /*none*/, ::GFile* file /*none,nullable*/);
void base::DirectoryListBase::set_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (::GFile*) (file_to_c));
}
void base::DirectoryListBase::set_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_directory_list_set_io_priority (GtkDirectoryList* self /*none*/, int io_priority);
// void gtk_directory_list_set_io_priority (::GtkDirectoryList* self /*none*/, gint io_priority);
void base::DirectoryListBase::set_io_priority (gint io_priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, gint io_priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_io_priority;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (gint) (io_priority_to_c));
}

// void gtk_directory_list_set_monitored (GtkDirectoryList* self /*none*/, gboolean monitored);
// void gtk_directory_list_set_monitored (::GtkDirectoryList* self /*none*/, gboolean monitored);
void base::DirectoryListBase::set_monitored (gboolean monitored) noexcept
{
  typedef void (*call_wrap_t) (::GtkDirectoryList* self, gboolean monitored);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_directory_list_set_monitored;
  auto monitored_to_c = monitored;
  call_wrap_v ((::GtkDirectoryList*) (gobj_()), (gboolean) (monitored_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/directorylist_extra_def_impl.hpp>)
#include <gtk/directorylist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/directorylist_extra_impl.hpp>)
#include <gtk/directorylist_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DirectoryListClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkDirectoryListClass *methods = (::GtkDirectoryListClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
