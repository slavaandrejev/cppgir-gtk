// AUTO-GENERATED

#ifndef _GI_GTK_LISTSTORE_IMPL_HPP_
#define _GI_GTK_LISTSTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable ListStoreBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::TreeDragDest ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragDest>)
{ return gi::wrap ((Gtk::TreeDragDest::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gtk::TreeDragDest ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragDest>()); }

Gtk::TreeDragSource ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

Gtk::TreeSortable ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeSortable>)
{ return gi::wrap ((Gtk::TreeSortable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gtk::TreeSortable ()
{ return interface_ (gi::interface_tag<Gtk::TreeSortable>()); }

// GtkListStore* /*full*/ gtk_list_store_new (int n_columns,  ..._ /*none*/);
// ::GtkListStore* /*full*/ gtk_list_store_new (gint n_columns,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkListStore* /*full*/ gtk_list_store_newv (int n_columns, GType* types /*none*/);
// ::GtkListStore* /*full*/ gtk_list_store_newv (gint n_columns, GType* types /*none*/);
Gtk::ListStore base::ListStoreBase::new_ (gint n_columns, const GType * types) noexcept
{
  typedef ::GtkListStore* (*call_wrap_t) (gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_newv;
  auto types_to_c = types;
  auto _temp_ret = call_wrap_v ((gint) (n_columns), (GType*) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_list_store_append (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// void gtk_list_store_append (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
void base::ListStoreBase::append (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_append;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()));
}
Gtk::TreeIter base::ListStoreBase::append () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_append;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  return iter_c;
}

// void gtk_list_store_clear (GtkListStore* list_store /*none*/);
// void gtk_list_store_clear (::GtkListStore* list_store /*none*/);
void base::ListStoreBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_clear;
  call_wrap_v ((::GtkListStore*) (gobj_()));
}

// void gtk_list_store_insert (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, int position);
// void gtk_list_store_insert (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, gint position);
void base::ListStoreBase::insert (Gtk::TreeIter & iter, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert;
  auto position_to_c = position;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (gint) (position_to_c));
}
Gtk::TreeIter base::ListStoreBase::insert (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert;
  auto position_to_c = position;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (gint) (position_to_c));
  return iter_c;
}

// void gtk_list_store_insert_after (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_list_store_insert_after (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* sibling /*none,nullable*/);
void base::ListStoreBase::insert_after (Gtk::TreeIter & iter, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (sibling_to_c));
}
void base::ListStoreBase::insert_after (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_after;
  auto sibling_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (sibling_to_c));
}
Gtk::TreeIter base::ListStoreBase::insert_after (Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}
Gtk::TreeIter base::ListStoreBase::insert_after () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_after;
  auto sibling_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}

// void gtk_list_store_insert_before (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_list_store_insert_before (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* sibling /*none,nullable*/);
void base::ListStoreBase::insert_before (Gtk::TreeIter & iter, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (sibling_to_c));
}
void base::ListStoreBase::insert_before (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_before;
  auto sibling_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (sibling_to_c));
}
Gtk::TreeIter base::ListStoreBase::insert_before (Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}
Gtk::TreeIter base::ListStoreBase::insert_before () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_insert_before;
  auto sibling_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}

// void gtk_list_store_insert_with_values (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, int position,  ..._ /*none*/);
// void gtk_list_store_insert_with_values (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, gint position,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by insert_with_valuesv, varargs not supported

// void gtk_list_store_insert_with_valuesv (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, int position, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_list_store_insert_with_valuesv (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, gint position, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// gboolean gtk_list_store_iter_is_valid (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_list_store_iter_is_valid (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::ListStoreBase::iter_is_valid (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_iter_is_valid;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_list_store_move_after (GtkListStore* store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_list_store_move_after (::GtkListStore* store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
void base::ListStoreBase::move_after (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_move_after;
  auto position_to_c = gi::unwrap (position, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::ListStoreBase::move_after (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_move_after;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_list_store_move_before (GtkListStore* store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_list_store_move_before (::GtkListStore* store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
void base::ListStoreBase::move_before (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_move_before;
  auto position_to_c = gi::unwrap (position, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::ListStoreBase::move_before (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_move_before;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_list_store_prepend (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// void gtk_list_store_prepend (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
void base::ListStoreBase::prepend (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_prepend;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()));
}
Gtk::TreeIter base::ListStoreBase::prepend () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_prepend;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  return iter_c;
}

// gboolean gtk_list_store_remove (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_list_store_remove (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::ListStoreBase::remove (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_remove;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_list_store_reorder (GtkListStore* store /*none*/, int* new_order /*none*/);
// void gtk_list_store_reorder (::GtkListStore* store /*none*/, gint* new_order /*none*/);
void base::ListStoreBase::reorder (gi::CollectionParameter<gi::ZTSpan, gint, gi::transfer_none_t> new_order) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, gint* new_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_reorder;
  auto new_order_w = unwrap (std::move(new_order), gi::transfer_none);
  auto new_order_to_c = new_order_w;
  call_wrap_v ((::GtkListStore*) (gobj_()), (gint*) (new_order_to_c));
}

// void gtk_list_store_set (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// void gtk_list_store_set (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_list_store_set_column_types (GtkListStore* list_store /*none*/, int n_columns, GType* types /*none*/);
// void gtk_list_store_set_column_types (::GtkListStore* list_store /*none*/, gint n_columns, GType* types /*none*/);
void base::ListStoreBase::set_column_types (gint n_columns, const GType * types) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_set_column_types;
  auto types_to_c = types;
  call_wrap_v ((::GtkListStore*) (gobj_()), (gint) (n_columns), (GType*) (types_to_c));
}

// void gtk_list_store_set_valist (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/, va_list var_args /*none*/);
// void gtk_list_store_set_valist (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_list_store_set_value (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none*/);
// void gtk_list_store_set_value (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none*/);
void base::ListStoreBase::set_value (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value_to_c));
}

// void gtk_list_store_set_valuesv (GtkListStore* list_store /*none*/, GtkTreeIter* iter /*none*/, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_list_store_set_valuesv (::GtkListStore* list_store /*none*/, ::GtkTreeIter* iter /*none*/, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_list_store_swap (GtkListStore* store /*none*/, GtkTreeIter* a /*none*/, GtkTreeIter* b /*none*/);
// void gtk_list_store_swap (::GtkListStore* store /*none*/, ::GtkTreeIter* a /*none*/, ::GtkTreeIter* b /*none*/);
void base::ListStoreBase::swap (Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* a, ::GtkTreeIter* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_store_swap;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (a_to_c), (::GtkTreeIter*) (b_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/liststore_extra_def_impl.hpp>)
#include <gtk/liststore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/liststore_extra_impl.hpp>)
#include <gtk/liststore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ListStoreClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkListStoreClass *methods = (::GtkListStoreClass *) class_struct;
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
