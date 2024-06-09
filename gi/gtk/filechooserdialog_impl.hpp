// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_FILECHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserDialogBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileChooserDialogBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkWidget* /*none*/ gtk_file_chooser_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/, GtkFileChooserAction action, const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// ::GtkFileChooserDialog* /*none*/ gtk_file_chooser_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/, ::GtkFileChooserAction action, const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra_def_impl.hpp>)
#include <gtk/filechooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra_impl.hpp>)
#include <gtk/filechooserdialog_extra_impl.hpp>
#endif
#endif

#endif
