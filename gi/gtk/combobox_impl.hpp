// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOX_IMPL_HPP_
#define _GI_GTK_COMBOBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellEditable ComboBoxBase::interface_ (gi::interface_tag<Gtk::CellEditable>)
{ return gi::wrap ((Gtk::CellEditable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ComboBoxBase::operator Gtk::CellEditable ()
{ return interface_ (gi::interface_tag<Gtk::CellEditable>()); }

Gtk::CellLayout ComboBoxBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ComboBoxBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// GtkWidget* /*none*/ gtk_combo_box_new ();
// ::GtkComboBox* /*none*/ gtk_combo_box_new ();
Gtk::ComboBox base::ComboBoxBase::new_ () noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_combo_box_new_with_entry ();
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_entry ();
Gtk::ComboBox base::ComboBoxBase::new_with_entry () noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_entry;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_combo_box_new_with_model (GtkTreeModel* model /*none*/);
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_model (::GtkTreeModel* model /*none*/);
Gtk::ComboBox base::ComboBoxBase::new_with_model (Gtk::TreeModel model) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_combo_box_new_with_model_and_entry (GtkTreeModel* model /*none*/);
// ::GtkComboBox* /*none*/ gtk_combo_box_new_with_model_and_entry (::GtkTreeModel* model /*none*/);
Gtk::ComboBox base::ComboBoxBase::new_with_model_and_entry (Gtk::TreeModel model) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_model_and_entry;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_combo_box_get_active (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_active (::GtkComboBox* combo_box /*none*/);
gint base::ComboBoxBase::get_active () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_active;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_combo_box_get_active_id (GtkComboBox* combo_box /*none*/);
// const char* /*none,nullable*/ gtk_combo_box_get_active_id (::GtkComboBox* combo_box /*none*/);
gi::cstring_v base::ComboBoxBase::get_active_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_active_id;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_combo_box_get_active_iter (GtkComboBox* combo_box /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// gboolean gtk_combo_box_get_active_iter (::GtkComboBox* combo_box /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
bool base::ComboBoxBase::get_active_iter (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_active_iter;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::ComboBoxBase::get_active_iter () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_active_iter;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox* combo_box /*none*/);
// ::GtkSensitivityType gtk_combo_box_get_button_sensitivity (::GtkComboBox* combo_box /*none*/);
Gtk::SensitivityType base::ComboBoxBase::get_button_sensitivity () noexcept
{
  typedef ::GtkSensitivityType (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_button_sensitivity;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ gtk_combo_box_get_child (GtkComboBox* combo_box /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_combo_box_get_child (::GtkComboBox* combo_box /*none*/);
Gtk::Widget base::ComboBoxBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_child;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_combo_box_get_entry_text_column (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_entry_text_column (::GtkComboBox* combo_box /*none*/);
gint base::ComboBoxBase::get_entry_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_entry_text_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_combo_box_get_has_entry (GtkComboBox* combo_box /*none*/);
// gboolean gtk_combo_box_get_has_entry (::GtkComboBox* combo_box /*none*/);
bool base::ComboBoxBase::get_has_entry () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_has_entry;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// int gtk_combo_box_get_id_column (GtkComboBox* combo_box /*none*/);
// gint gtk_combo_box_get_id_column (::GtkComboBox* combo_box /*none*/);
gint base::ComboBoxBase::get_id_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_id_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* /*none,nullable*/ gtk_combo_box_get_model (GtkComboBox* combo_box /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_combo_box_get_model (::GtkComboBox* combo_box /*none*/);
Gtk::TreeModel base::ComboBoxBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_model;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_combo_box_get_popup_fixed_width (GtkComboBox* combo_box /*none*/);
// gboolean gtk_combo_box_get_popup_fixed_width (::GtkComboBox* combo_box /*none*/);
bool base::ComboBoxBase::get_popup_fixed_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_get_popup_fixed_width;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// FAILURE on gtk_combo_box_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// void gtk_combo_box_popdown (GtkComboBox* combo_box /*none*/);
// void gtk_combo_box_popdown (::GtkComboBox* combo_box /*none*/);
void base::ComboBoxBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_popdown;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// void gtk_combo_box_popup (GtkComboBox* combo_box /*none*/);
// void gtk_combo_box_popup (::GtkComboBox* combo_box /*none*/);
void base::ComboBoxBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_popup;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// void gtk_combo_box_popup_for_device (GtkComboBox* combo_box /*none*/, GdkDevice* device /*none*/);
// void gtk_combo_box_popup_for_device (::GtkComboBox* combo_box /*none*/, ::GdkDevice* device /*none*/);
void base::ComboBoxBase::popup_for_device (Gdk::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_popup_for_device;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GdkDevice*) (device_to_c));
}

// void gtk_combo_box_set_active (GtkComboBox* combo_box /*none*/, int index_);
// void gtk_combo_box_set_active (::GtkComboBox* combo_box /*none*/, gint index_);
void base::ComboBoxBase::set_active (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_active;
  auto index__to_c = index_;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (index__to_c));
}

// gboolean gtk_combo_box_set_active_id (GtkComboBox* combo_box /*none*/, const char* active_id /*none,nullable*/);
// gboolean gtk_combo_box_set_active_id (::GtkComboBox* combo_box /*none*/, const char* active_id /*none,nullable*/);
bool base::ComboBoxBase::set_active_id (const gi::cstring_v active_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, const char* active_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_active_id;
  auto active_id_to_c = gi::unwrap (active_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (active_id_to_c));
  return _temp_ret;
}
bool base::ComboBoxBase::set_active_id () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, const char* active_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_active_id;
  auto active_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (active_id_to_c));
  return _temp_ret;
}

// void gtk_combo_box_set_active_iter (GtkComboBox* combo_box /*none*/, GtkTreeIter* iter /*none,nullable*/);
// void gtk_combo_box_set_active_iter (::GtkComboBox* combo_box /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
void base::ComboBoxBase::set_active_iter (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_active_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}
void base::ComboBoxBase::set_active_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_active_iter;
  auto iter_to_c = nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_combo_box_set_button_sensitivity (GtkComboBox* combo_box /*none*/, GtkSensitivityType sensitivity);
// void gtk_combo_box_set_button_sensitivity (::GtkComboBox* combo_box /*none*/, ::GtkSensitivityType sensitivity);
void base::ComboBoxBase::set_button_sensitivity (Gtk::SensitivityType sensitivity) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkSensitivityType sensitivity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_button_sensitivity;
  auto sensitivity_to_c = gi::unwrap (sensitivity);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkSensitivityType) (sensitivity_to_c));
}

// void gtk_combo_box_set_child (GtkComboBox* combo_box /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_combo_box_set_child (::GtkComboBox* combo_box /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ComboBoxBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ComboBoxBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_combo_box_set_entry_text_column (GtkComboBox* combo_box /*none*/, int text_column);
// void gtk_combo_box_set_entry_text_column (::GtkComboBox* combo_box /*none*/, gint text_column);
void base::ComboBoxBase::set_entry_text_column (gint text_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint text_column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_entry_text_column;
  auto text_column_to_c = text_column;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (text_column_to_c));
}

// void gtk_combo_box_set_id_column (GtkComboBox* combo_box /*none*/, int id_column);
// void gtk_combo_box_set_id_column (::GtkComboBox* combo_box /*none*/, gint id_column);
void base::ComboBoxBase::set_id_column (gint id_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint id_column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_id_column;
  auto id_column_to_c = id_column;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (id_column_to_c));
}

// void gtk_combo_box_set_model (GtkComboBox* combo_box /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_combo_box_set_model (::GtkComboBox* combo_box /*none*/, ::GtkTreeModel* model /*none,nullable*/);
void base::ComboBoxBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::ComboBoxBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_combo_box_set_popup_fixed_width (GtkComboBox* combo_box /*none*/, gboolean fixed);
// void gtk_combo_box_set_popup_fixed_width (::GtkComboBox* combo_box /*none*/, gboolean fixed);
void base::ComboBoxBase::set_popup_fixed_width (gboolean fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gboolean fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_popup_fixed_width;
  auto fixed_to_c = fixed;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gboolean) (fixed_to_c));
}

// void gtk_combo_box_set_row_separator_func (GtkComboBox* combo_box /*none*/, GtkTreeViewRowSeparatorFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_combo_box_set_row_separator_func (::GtkComboBox* combo_box /*none*/, Gtk::TreeViewRowSeparatorFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
void base::ComboBoxBase::set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_combo_box_set_row_separator_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (Gtk::TreeViewRowSeparatorFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_def_impl.hpp>)
#include <gtk/combobox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_impl.hpp>)
#include <gtk/combobox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ComboBoxClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkComboBoxClass *methods = (::GtkComboBoxClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.format_entry_text) methods->format_entry_text = (decltype (methods->format_entry_text)) detail::method_wrapper<self, gi::cstring (*) (const gi::cstring_v path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::format_entry_text_>;
}

// void ComboBox::activate (GtkComboBox* combo_box /*none*/);
// void ComboBox::activate (::GtkComboBox* combo_box /*none*/);
void ComboBoxClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// void ComboBox::changed (GtkComboBox* combo_box /*none*/);
// void ComboBox::changed (::GtkComboBox* combo_box /*none*/);
void ComboBoxClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// char* /*full*/ ComboBox::format_entry_text (GtkComboBox* combo_box /*none*/, const char* path /*none*/);
// char* /*full*/ ComboBox::format_entry_text (::GtkComboBox* combo_box /*none*/, const char* path /*none*/);
gi::cstring ComboBoxClass::format_entry_text_ (const gi::cstring_v path) noexcept
{
  if (!get_struct_()->format_entry_text) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GtkComboBox* combo_box, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->format_entry_text;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
