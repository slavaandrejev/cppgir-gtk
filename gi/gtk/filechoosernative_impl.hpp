// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERNATIVE_IMPL_HPP_
#define _GI_GTK_FILECHOOSERNATIVE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserNativeBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileChooserNativeBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkFileChooserNative* /*full*/ gtk_file_chooser_native_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/, GtkFileChooserAction action, const char* accept_label /*none,nullable*/, const char* cancel_label /*none,nullable*/);
// ::GtkFileChooserNative* /*full*/ gtk_file_chooser_native_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/, ::GtkFileChooserAction action, const char* accept_label /*none,nullable*/, const char* cancel_label /*none,nullable*/);
Gtk::FileChooserNative base::FileChooserNativeBase::new_ (const gi::cstring_v title, Gtk::Window parent, Gtk::FileChooserAction action, const gi::cstring_v accept_label, const gi::cstring_v cancel_label) noexcept
{
  typedef ::GtkFileChooserNative* (*call_wrap_t) (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_new;
  auto cancel_label_to_c = gi::unwrap (cancel_label, gi::transfer_none);
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none);
  auto action_to_c = gi::unwrap (action);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c), (::GtkFileChooserAction) (action_to_c), (const char*) (accept_label_to_c), (const char*) (cancel_label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::FileChooserNative base::FileChooserNativeBase::new_ (Gtk::FileChooserAction action) noexcept
{
  typedef ::GtkFileChooserNative* (*call_wrap_t) (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_new;
  auto cancel_label_to_c = nullptr;
  auto accept_label_to_c = nullptr;
  auto action_to_c = gi::unwrap (action);
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c), (::GtkFileChooserAction) (action_to_c), (const char*) (accept_label_to_c), (const char*) (cancel_label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_file_chooser_native_get_accept_label (GtkFileChooserNative* self /*none*/);
// const char* /*none,nullable*/ gtk_file_chooser_native_get_accept_label (::GtkFileChooserNative* self /*none*/);
gi::cstring_v base::FileChooserNativeBase::get_accept_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooserNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_get_accept_label;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_file_chooser_native_get_cancel_label (GtkFileChooserNative* self /*none*/);
// const char* /*none,nullable*/ gtk_file_chooser_native_get_cancel_label (::GtkFileChooserNative* self /*none*/);
gi::cstring_v base::FileChooserNativeBase::get_cancel_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooserNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_get_cancel_label;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_file_chooser_native_set_accept_label (GtkFileChooserNative* self /*none*/, const char* accept_label /*none,nullable*/);
// void gtk_file_chooser_native_set_accept_label (::GtkFileChooserNative* self /*none*/, const char* accept_label /*none,nullable*/);
void base::FileChooserNativeBase::set_accept_label (const gi::cstring_v accept_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_set_accept_label;
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none);
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (accept_label_to_c));
}
void base::FileChooserNativeBase::set_accept_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_set_accept_label;
  auto accept_label_to_c = nullptr;
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (accept_label_to_c));
}

// void gtk_file_chooser_native_set_cancel_label (GtkFileChooserNative* self /*none*/, const char* cancel_label /*none,nullable*/);
// void gtk_file_chooser_native_set_cancel_label (::GtkFileChooserNative* self /*none*/, const char* cancel_label /*none,nullable*/);
void base::FileChooserNativeBase::set_cancel_label (const gi::cstring_v cancel_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_set_cancel_label;
  auto cancel_label_to_c = gi::unwrap (cancel_label, gi::transfer_none);
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (cancel_label_to_c));
}
void base::FileChooserNativeBase::set_cancel_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_native_set_cancel_label;
  auto cancel_label_to_c = nullptr;
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (cancel_label_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra_def_impl.hpp>)
#include <gtk/filechoosernative_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra_impl.hpp>)
#include <gtk/filechoosernative_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileChooserNativeClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFileChooserNativeClass *methods = (::GtkFileChooserNativeClass *) class_struct;
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
