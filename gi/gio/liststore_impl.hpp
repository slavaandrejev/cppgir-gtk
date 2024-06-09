// AUTO-GENERATED

#ifndef _GI_GIO_LISTSTORE_IMPL_HPP_
#define _GI_GIO_LISTSTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ListModel ListStoreBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListStoreBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GListStore* /*full*/ g_list_store_new (GType item_type);
// ::GListStore* /*full*/ g_list_store_new (GType item_type);
Gio::ListStore base::ListStoreBase::new_ (GType item_type) noexcept
{
  typedef ::GListStore* (*call_wrap_t) (GType item_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_new;
  auto item_type_to_c = item_type;
  auto _temp_ret = call_wrap_v ((GType) (item_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_list_store_append (GListStore* store /*none*/, gpointer item /*none*/);
// void g_list_store_append (::GListStore* store /*none*/, ::GObject* item /*none*/);
void base::ListStoreBase::append (GObject::Object item) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_append;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c));
}

// gboolean g_list_store_find (GListStore* store /*none*/, gpointer item /*none*/, guint* position);
// gboolean g_list_store_find (::GListStore* store /*none*/, ::GObject* item /*none*/, guint* position);
bool base::ListStoreBase::find (GObject::Object item, guint * position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find;
  guint position_o {};
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (guint*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::ListStoreBase::find (GObject::Object item) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find;
  guint position_o {};
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (guint*) (&position_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = position_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_list_store_find_with_equal_func (GListStore* store /*none*/, gpointer item /*none,nullable*/, GEqualFunc equal_func /*none*/, guint* position);
// gboolean g_list_store_find_with_equal_func (::GListStore* store /*none*/, ::GObject* item /*none,nullable*/,  equal_func /*none*/, guint* position);
// SKIP; equal_func type  not supported

// gboolean g_list_store_find_with_equal_func_full (GListStore* store /*none*/, gpointer item /*none,nullable*/, GEqualFuncFull equal_func /*none*/, gpointer user_data, guint* position);
// gboolean g_list_store_find_with_equal_func_full (::GListStore* store /*none*/, ::GObject* item /*none,nullable*/, GLib::EqualFuncFull::cfunction_type equal_func /*none*/, void* user_data, guint* position);
bool base::ListStoreBase::find_with_equal_func_full (GObject::Object item, GLib::EqualFuncFull equal_func, guint * position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::EqualFuncFull::cfunction_type equal_func, void* user_data, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find_with_equal_func_full;
  guint position_o {};
  auto equal_func_wrap_ = equal_func ? unwrap (std::move (equal_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(equal_func_wrap_)>::type> equal_func_wrap__sp (equal_func_wrap_);
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::EqualFuncFull::cfunction_type) (equal_func_wrap_ ? &equal_func_wrap_->wrapper : nullptr), (void*) (equal_func_wrap_), (guint*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  return _temp_ret;
}
bool base::ListStoreBase::find_with_equal_func_full (GLib::EqualFuncFull equal_func, guint * position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::EqualFuncFull::cfunction_type equal_func, void* user_data, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find_with_equal_func_full;
  guint position_o {};
  auto equal_func_wrap_ = equal_func ? unwrap (std::move (equal_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(equal_func_wrap_)>::type> equal_func_wrap__sp (equal_func_wrap_);
  auto item_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::EqualFuncFull::cfunction_type) (equal_func_wrap_ ? &equal_func_wrap_->wrapper : nullptr), (void*) (equal_func_wrap_), (guint*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::ListStoreBase::find_with_equal_func_full (GObject::Object item, GLib::EqualFuncFull equal_func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::EqualFuncFull::cfunction_type equal_func, void* user_data, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find_with_equal_func_full;
  guint position_o {};
  auto equal_func_wrap_ = equal_func ? unwrap (std::move (equal_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(equal_func_wrap_)>::type> equal_func_wrap__sp (equal_func_wrap_);
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::EqualFuncFull::cfunction_type) (equal_func_wrap_ ? &equal_func_wrap_->wrapper : nullptr), (void*) (equal_func_wrap_), (guint*) (&position_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = position_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::ListStoreBase::find_with_equal_func_full (GLib::EqualFuncFull equal_func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::EqualFuncFull::cfunction_type equal_func, void* user_data, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_find_with_equal_func_full;
  guint position_o {};
  auto equal_func_wrap_ = equal_func ? unwrap (std::move (equal_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(equal_func_wrap_)>::type> equal_func_wrap__sp (equal_func_wrap_);
  auto item_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::EqualFuncFull::cfunction_type) (equal_func_wrap_ ? &equal_func_wrap_->wrapper : nullptr), (void*) (equal_func_wrap_), (guint*) (&position_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = position_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_list_store_insert (GListStore* store /*none*/, guint position, gpointer item /*none*/);
// void g_list_store_insert (::GListStore* store /*none*/, guint position, ::GObject* item /*none*/);
void base::ListStoreBase::insert (guint position, GObject::Object item) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_insert;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c), (::GObject*) (item_to_c));
}

// guint g_list_store_insert_sorted (GListStore* store /*none*/, gpointer item /*none*/, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// guint g_list_store_insert_sorted (::GListStore* store /*none*/, ::GObject* item /*none*/, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
guint base::ListStoreBase::insert_sorted (GObject::Object item, GLib::CompareDataFunc compare_func) noexcept
{
  typedef guint (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_insert_sorted;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
  return _temp_ret;
}

// void g_list_store_remove (GListStore* store /*none*/, guint position);
// void g_list_store_remove (::GListStore* store /*none*/, guint position);
void base::ListStoreBase::remove (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_remove;
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c));
}

// void g_list_store_remove_all (GListStore* store /*none*/);
// void g_list_store_remove_all (::GListStore* store /*none*/);
void base::ListStoreBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_remove_all;
  call_wrap_v ((::GListStore*) (gobj_()));
}

// void g_list_store_sort (GListStore* store /*none*/, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// void g_list_store_sort (::GListStore* store /*none*/, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
void base::ListStoreBase::sort (GLib::CompareDataFunc compare_func) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_sort;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  call_wrap_v ((::GListStore*) (gobj_()), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
}

// void g_list_store_splice (GListStore* store /*none*/, guint position, guint n_removals, gpointer* additions /*none*/, guint n_additions);
// void g_list_store_splice (::GListStore* store /*none*/, guint position, guint n_removals, ::GObject** additions /*none*/, guint n_additions);
void base::ListStoreBase::splice (guint position, guint n_removals, gi::CollectionParameter<gi::DSpan, ::GObject*, gi::transfer_none_t> additions) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position, guint n_removals, ::GObject** additions, guint n_additions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_list_store_splice;
  auto additions_w = unwrap (std::move(additions), gi::transfer_none);
  auto additions_to_c = additions_w;
  auto n_removals_to_c = n_removals;
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c), (guint) (n_removals_to_c), (::GObject**) (additions_to_c), (guint) (additions._size()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/liststore_extra_def_impl.hpp>)
#include <gio/liststore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/liststore_extra_impl.hpp>)
#include <gio/liststore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ListStoreClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GListStoreClass *methods = (::GListStoreClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
