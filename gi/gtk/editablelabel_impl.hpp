// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLELABEL_IMPL_HPP_
#define _GI_GTK_EDITABLELABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Editable EditableLabelBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EditableLabelBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ gtk_editable_label_new (const char* str /*none*/);
// ::GtkEditableLabel* /*none*/ gtk_editable_label_new (const char* str /*none*/);
Gtk::EditableLabel base::EditableLabelBase::new_ (const gi::cstring_v str) noexcept
{
  typedef ::GtkEditableLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_label_new;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_editable_label_get_editing (GtkEditableLabel* self /*none*/);
// gboolean gtk_editable_label_get_editing (::GtkEditableLabel* self /*none*/);
bool base::EditableLabelBase::get_editing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditableLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_label_get_editing;
  auto _temp_ret = call_wrap_v ((::GtkEditableLabel*) (gobj_()));
  return _temp_ret;
}

// void gtk_editable_label_start_editing (GtkEditableLabel* self /*none*/);
// void gtk_editable_label_start_editing (::GtkEditableLabel* self /*none*/);
void base::EditableLabelBase::start_editing () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditableLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_label_start_editing;
  call_wrap_v ((::GtkEditableLabel*) (gobj_()));
}

// void gtk_editable_label_stop_editing (GtkEditableLabel* self /*none*/, gboolean commit);
// void gtk_editable_label_stop_editing (::GtkEditableLabel* self /*none*/, gboolean commit);
void base::EditableLabelBase::stop_editing (gboolean commit) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditableLabel* self, gboolean commit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_label_stop_editing;
  auto commit_to_c = commit;
  call_wrap_v ((::GtkEditableLabel*) (gobj_()), (gboolean) (commit_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editablelabel_extra_def_impl.hpp>)
#include <gtk/editablelabel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editablelabel_extra_impl.hpp>)
#include <gtk/editablelabel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EditableLabelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkEditableLabelClass *methods = (::GtkEditableLabelClass *) class_struct;
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
