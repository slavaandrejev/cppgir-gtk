// AUTO-GENERATED

#ifndef _GI_GTK_TREESTORE_IMPL_HPP_
#define _GI_GTK_TREESTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable TreeStoreBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeStoreBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::TreeDragDest TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragDest>)
{ return gi::wrap ((Gtk::TreeDragDest::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeStoreBase::operator Gtk::TreeDragDest ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragDest>()); }

Gtk::TreeDragSource TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeStoreBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeStoreBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

Gtk::TreeSortable TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeSortable>)
{ return gi::wrap ((Gtk::TreeSortable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeStoreBase::operator Gtk::TreeSortable ()
{ return interface_ (gi::interface_tag<Gtk::TreeSortable>()); }

// GtkTreeStore* /*full*/ gtk_tree_store_new (int n_columns,  ..._ /*none*/);
// ::GtkTreeStore* /*full*/ gtk_tree_store_new (gint n_columns,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkTreeStore* /*full*/ gtk_tree_store_newv (int n_columns, GType* types /*none*/);
// ::GtkTreeStore* /*full*/ gtk_tree_store_newv (gint n_columns, GType* types /*none*/);
Gtk::TreeStore base::TreeStoreBase::new_ (gint n_columns, const GType * types) noexcept
{
  typedef ::GtkTreeStore* (*call_wrap_t) (gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_newv;
  auto types_to_c = types;
  auto _temp_ret = call_wrap_v ((gint) (n_columns), (GType*) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_store_append (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// void gtk_tree_store_append (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
void base::TreeStoreBase::append (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_append;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
}
void base::TreeStoreBase::append (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_append;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
}
Gtk::TreeIter base::TreeStoreBase::append (Gtk::TreeIter_Ref parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_append;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  return iter_c;
}
Gtk::TreeIter base::TreeStoreBase::append () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_append;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  return iter_c;
}

// void gtk_tree_store_clear (GtkTreeStore* tree_store /*none*/);
// void gtk_tree_store_clear (::GtkTreeStore* tree_store /*none*/);
void base::TreeStoreBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_clear;
  call_wrap_v ((::GtkTreeStore*) (gobj_()));
}

// void gtk_tree_store_insert (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int position);
// void gtk_tree_store_insert (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position);
void base::TreeStoreBase::insert (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
}
void base::TreeStoreBase::insert (Gtk::TreeIter & iter, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
}
Gtk::TreeIter base::TreeStoreBase::insert (Gtk::TreeIter_Ref parent, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  return iter_c;
}
Gtk::TreeIter base::TreeStoreBase::insert (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  return iter_c;
}

// void gtk_tree_store_insert_after (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_tree_store_insert_after (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, ::GtkTreeIter* sibling /*none,nullable*/);
void base::TreeStoreBase::insert_after (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
}
void base::TreeStoreBase::insert_after (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_after;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
}
Gtk::TreeIter base::TreeStoreBase::insert_after (Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}
Gtk::TreeIter base::TreeStoreBase::insert_after () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_after;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}

// void gtk_tree_store_insert_before (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_tree_store_insert_before (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, ::GtkTreeIter* sibling /*none,nullable*/);
void base::TreeStoreBase::insert_before (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
}
void base::TreeStoreBase::insert_before (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_before;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
}
Gtk::TreeIter base::TreeStoreBase::insert_before (Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}
Gtk::TreeIter base::TreeStoreBase::insert_before () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_insert_before;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return iter_c;
}

// void gtk_tree_store_insert_with_values (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, GtkTreeIter* parent /*none,nullable*/, int position,  ..._ /*none*/);
// void gtk_tree_store_insert_with_values (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by insert_with_valuesv, varargs not supported

// void gtk_tree_store_insert_with_valuesv (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, GtkTreeIter* parent /*none,nullable*/, int position, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_tree_store_insert_with_valuesv (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// gboolean gtk_tree_store_is_ancestor (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* descendant /*none*/);
// gboolean gtk_tree_store_is_ancestor (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* descendant /*none*/);
bool base::TreeStoreBase::is_ancestor (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref descendant) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_is_ancestor;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (descendant_to_c));
  return _temp_ret;
}

// int gtk_tree_store_iter_depth (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gint gtk_tree_store_iter_depth (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
gint base::TreeStoreBase::iter_depth (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_iter_depth;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_store_iter_is_valid (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_store_iter_is_valid (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeStoreBase::iter_is_valid (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_iter_is_valid;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_store_move_after (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_tree_store_move_after (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
void base::TreeStoreBase::move_after (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_move_after;
  auto position_to_c = gi::unwrap (position, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::TreeStoreBase::move_after (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_move_after;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_tree_store_move_before (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_tree_store_move_before (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
void base::TreeStoreBase::move_before (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_move_before;
  auto position_to_c = gi::unwrap (position, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::TreeStoreBase::move_before (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_move_before;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_tree_store_prepend (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// void gtk_tree_store_prepend (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
void base::TreeStoreBase::prepend (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_prepend;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
}
void base::TreeStoreBase::prepend (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_prepend;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
}
Gtk::TreeIter base::TreeStoreBase::prepend (Gtk::TreeIter_Ref parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_prepend;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  return iter_c;
}
Gtk::TreeIter base::TreeStoreBase::prepend () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_prepend;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  return iter_c;
}

// gboolean gtk_tree_store_remove (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_store_remove (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeStoreBase::remove (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_remove;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_store_reorder (GtkTreeStore* tree_store /*none*/, GtkTreeIter* parent /*none,nullable*/,  new_order /*none*/);
// void gtk_tree_store_reorder (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* parent /*none,nullable*/, * new_order /*none*/);
// IGNORE; not introspectable, inconsistent array info

// void gtk_tree_store_set (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// void gtk_tree_store_set (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_tree_store_set_column_types (GtkTreeStore* tree_store /*none*/, int n_columns, GType* types /*none*/);
// void gtk_tree_store_set_column_types (::GtkTreeStore* tree_store /*none*/, gint n_columns, GType* types /*none*/);
void base::TreeStoreBase::set_column_types (gint n_columns, const GType * types) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_set_column_types;
  auto types_to_c = types;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (gint) (n_columns), (GType*) (types_to_c));
}

// void gtk_tree_store_set_valist (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, va_list var_args /*none*/);
// void gtk_tree_store_set_valist (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_store_set_value (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none*/);
// void gtk_tree_store_set_value (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none*/);
void base::TreeStoreBase::set_value (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value_to_c));
}

// void gtk_tree_store_set_valuesv (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_tree_store_set_valuesv (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_tree_store_swap (GtkTreeStore* tree_store /*none*/, GtkTreeIter* a /*none*/, GtkTreeIter* b /*none*/);
// void gtk_tree_store_swap (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* a /*none*/, ::GtkTreeIter* b /*none*/);
void base::TreeStoreBase::swap (Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* a, ::GtkTreeIter* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_store_swap;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (a_to_c), (::GtkTreeIter*) (b_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_def_impl.hpp>)
#include <gtk/treestore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_impl.hpp>)
#include <gtk/treestore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeStoreClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeStoreClass *methods = (::GtkTreeStoreClass *) class_struct;
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
