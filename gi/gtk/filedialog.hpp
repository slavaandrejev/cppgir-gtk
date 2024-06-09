// AUTO-GENERATED

#ifndef _GI_GTK_FILEDIALOG_HPP_
#define _GI_GTK_FILEDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class FileFilter;
class Window;

class FileDialog;

namespace base {


#define GI_GTK_FILEDIALOG_BASE base::FileDialogBase
class FileDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFileDialog BaseObjectType;

FileDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_dialog_get_type(); } 

// GtkFileDialog* /*full*/ gtk_file_dialog_new ();
// ::GtkFileDialog* /*full*/ gtk_file_dialog_new ();
static GI_INLINE_DECL Gtk::FileDialog new_ () noexcept;

// const char* /*none,nullable*/ gtk_file_dialog_get_accept_label (GtkFileDialog* self /*none*/);
// const char* /*none,nullable*/ gtk_file_dialog_get_accept_label (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accept_label () noexcept;

// GtkFileFilter* /*none,nullable*/ gtk_file_dialog_get_default_filter (GtkFileDialog* self /*none*/);
// ::GtkFileFilter* /*none,nullable*/ gtk_file_dialog_get_default_filter (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL Gtk::FileFilter get_default_filter () noexcept;

// GListModel* /*none,nullable*/ gtk_file_dialog_get_filters (GtkFileDialog* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_file_dialog_get_filters (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_filters () noexcept;

// GFile* /*none,nullable*/ gtk_file_dialog_get_initial_file (GtkFileDialog* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_dialog_get_initial_file (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL Gio::File get_initial_file () noexcept;

// GFile* /*none,nullable*/ gtk_file_dialog_get_initial_folder (GtkFileDialog* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_dialog_get_initial_folder (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL Gio::File get_initial_folder () noexcept;

// const char* /*none,nullable*/ gtk_file_dialog_get_initial_name (GtkFileDialog* self /*none*/);
// const char* /*none,nullable*/ gtk_file_dialog_get_initial_name (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_initial_name () noexcept;

// gboolean gtk_file_dialog_get_modal (GtkFileDialog* self /*none*/);
// gboolean gtk_file_dialog_get_modal (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* /*none*/ gtk_file_dialog_get_title (GtkFileDialog* self /*none*/);
// const char* /*none*/ gtk_file_dialog_get_title (::GtkFileDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void gtk_file_dialog_open (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_open (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void open (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void open (Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full,nullable*/ gtk_file_dialog_open_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_open_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::File open_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::File open_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_dialog_open_multiple (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_open_multiple (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void open_multiple (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void open_multiple (Gio::AsyncReadyCallback callback) noexcept;

// GListModel* /*full,nullable*/ gtk_file_dialog_open_multiple_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GListModel* /*full,nullable*/ gtk_file_dialog_open_multiple_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::ListModel open_multiple_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::ListModel open_multiple_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_dialog_save (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_save (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void save (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save (Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full,nullable*/ gtk_file_dialog_save_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_save_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::File save_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::File save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_dialog_select_folder (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_select_folder (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void select_folder (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void select_folder (Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full,nullable*/ gtk_file_dialog_select_folder_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_select_folder_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::File select_folder_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::File select_folder_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_dialog_select_multiple_folders (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_select_multiple_folders (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void select_multiple_folders (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void select_multiple_folders (Gio::AsyncReadyCallback callback) noexcept;

// GListModel* /*full,nullable*/ gtk_file_dialog_select_multiple_folders_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GListModel* /*full,nullable*/ gtk_file_dialog_select_multiple_folders_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::ListModel select_multiple_folders_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::ListModel select_multiple_folders_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_dialog_set_accept_label (GtkFileDialog* self /*none*/, const char* accept_label /*none,nullable*/);
// void gtk_file_dialog_set_accept_label (::GtkFileDialog* self /*none*/, const char* accept_label /*none,nullable*/);
GI_INLINE_DECL void set_accept_label (const gi::cstring_v accept_label) noexcept;
GI_INLINE_DECL void set_accept_label () noexcept;

// void gtk_file_dialog_set_default_filter (GtkFileDialog* self /*none*/, GtkFileFilter* filter /*none,nullable*/);
// void gtk_file_dialog_set_default_filter (::GtkFileDialog* self /*none*/, ::GtkFileFilter* filter /*none,nullable*/);
GI_INLINE_DECL void set_default_filter (Gtk::FileFilter filter) noexcept;
GI_INLINE_DECL void set_default_filter () noexcept;

// void gtk_file_dialog_set_filters (GtkFileDialog* self /*none*/, GListModel* filters /*none,nullable*/);
// void gtk_file_dialog_set_filters (::GtkFileDialog* self /*none*/, ::GListModel* filters /*none,nullable*/);
GI_INLINE_DECL void set_filters (Gio::ListModel filters) noexcept;
GI_INLINE_DECL void set_filters () noexcept;

// void gtk_file_dialog_set_initial_file (GtkFileDialog* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_file_dialog_set_initial_file (::GtkFileDialog* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_initial_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_initial_file () noexcept;

// void gtk_file_dialog_set_initial_folder (GtkFileDialog* self /*none*/, GFile* folder /*none,nullable*/);
// void gtk_file_dialog_set_initial_folder (::GtkFileDialog* self /*none*/, ::GFile* folder /*none,nullable*/);
GI_INLINE_DECL void set_initial_folder (Gio::File folder) noexcept;
GI_INLINE_DECL void set_initial_folder () noexcept;

// void gtk_file_dialog_set_initial_name (GtkFileDialog* self /*none*/, const char* name /*none,nullable*/);
// void gtk_file_dialog_set_initial_name (::GtkFileDialog* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_initial_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_initial_name () noexcept;

// void gtk_file_dialog_set_modal (GtkFileDialog* self /*none*/, gboolean modal);
// void gtk_file_dialog_set_modal (::GtkFileDialog* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_file_dialog_set_title (GtkFileDialog* self /*none*/, const char* title /*none*/);
// void gtk_file_dialog_set_title (::GtkFileDialog* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<gi::cstring, base::FileDialogBase> property_accept_label()
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "accept-label"); }
const gi::property_proxy<gi::cstring, base::FileDialogBase> property_accept_label() const
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "accept-label"); }

gi::property_proxy<Gtk::FileFilter, base::FileDialogBase> property_default_filter()
{ return gi::property_proxy<Gtk::FileFilter, base::FileDialogBase> (*this, "default-filter"); }
const gi::property_proxy<Gtk::FileFilter, base::FileDialogBase> property_default_filter() const
{ return gi::property_proxy<Gtk::FileFilter, base::FileDialogBase> (*this, "default-filter"); }

gi::property_proxy<Gio::ListModel, base::FileDialogBase> property_filters()
{ return gi::property_proxy<Gio::ListModel, base::FileDialogBase> (*this, "filters"); }
const gi::property_proxy<Gio::ListModel, base::FileDialogBase> property_filters() const
{ return gi::property_proxy<Gio::ListModel, base::FileDialogBase> (*this, "filters"); }

gi::property_proxy<Gio::File, base::FileDialogBase> property_initial_file()
{ return gi::property_proxy<Gio::File, base::FileDialogBase> (*this, "initial-file"); }
const gi::property_proxy<Gio::File, base::FileDialogBase> property_initial_file() const
{ return gi::property_proxy<Gio::File, base::FileDialogBase> (*this, "initial-file"); }

gi::property_proxy<Gio::File, base::FileDialogBase> property_initial_folder()
{ return gi::property_proxy<Gio::File, base::FileDialogBase> (*this, "initial-folder"); }
const gi::property_proxy<Gio::File, base::FileDialogBase> property_initial_folder() const
{ return gi::property_proxy<Gio::File, base::FileDialogBase> (*this, "initial-folder"); }

gi::property_proxy<gi::cstring, base::FileDialogBase> property_initial_name()
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "initial-name"); }
const gi::property_proxy<gi::cstring, base::FileDialogBase> property_initial_name() const
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "initial-name"); }

gi::property_proxy<bool, base::FileDialogBase> property_modal()
{ return gi::property_proxy<bool, base::FileDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::FileDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::FileDialogBase> (*this, "modal"); }

gi::property_proxy<gi::cstring, base::FileDialogBase> property_title()
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::FileDialogBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::FileDialogBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filedialog_extra_def.hpp>)
#include <gtk/filedialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filedialog_extra.hpp>)
#include <gtk/filedialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileDialog : public GI_GTK_FILEDIALOG_BASE
{ typedef GI_GTK_FILEDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileDialog>
{ typedef Gtk::FileDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileDialogClassDef
{
typedef FileDialogClassDef self;
public:
typedef Gtk::FileDialog instance_type;
typedef ::GtkFileDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FileDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileDialogClass: public detail::ClassTemplate<Gtk::impl::internal::FileDialogClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FileDialogClassDef;
typedef FileDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FileDialogClassDef::TypeInitData
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

using FileDialogImpl = detail::ObjectImpl<FileDialog, internal::FileDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
