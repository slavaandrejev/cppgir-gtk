// AUTO-GENERATED

#ifndef _GI_GTK_BITSETITER_IMPL_HPP_
#define _GI_GTK_BITSETITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// guint gtk_bitset_iter_get_value (const GtkBitsetIter* iter /*none*/);
// guint gtk_bitset_iter_get_value (const ::GtkBitsetIter* iter /*none*/);
guint base::BitsetIterBase::get_value () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBitsetIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_get_value;
  auto _temp_ret = call_wrap_v ((const ::GtkBitsetIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_bitset_iter_is_valid (const GtkBitsetIter* iter /*none*/);
// gboolean gtk_bitset_iter_is_valid (const ::GtkBitsetIter* iter /*none*/);
bool base::BitsetIterBase::is_valid () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkBitsetIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_is_valid;
  auto _temp_ret = call_wrap_v ((const ::GtkBitsetIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_bitset_iter_next (GtkBitsetIter* iter /*none*/, guint* value);
// gboolean gtk_bitset_iter_next (::GtkBitsetIter* iter /*none*/, guint* value);
bool base::BitsetIterBase::next (guint * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_next;
  guint value_o {};
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (gobj_()), (guint*) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::BitsetIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_next;
  guint value_o {};
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (gobj_()), (guint*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_bitset_iter_previous (GtkBitsetIter* iter /*none*/, guint* value);
// gboolean gtk_bitset_iter_previous (::GtkBitsetIter* iter /*none*/, guint* value);
bool base::BitsetIterBase::previous (guint * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_previous;
  guint value_o {};
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (gobj_()), (guint*) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::BitsetIterBase::previous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_previous;
  guint value_o {};
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (gobj_()), (guint*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_bitset_iter_init_at (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint target, guint* value);
// gboolean gtk_bitset_iter_init_at (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint target, guint* value);
bool base::BitsetIterBase::init_at (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint target, guint * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint target, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_at;
  guint value_o {};
  auto target_to_c = target;
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) ((::GtkBitsetIter*) (iter).gobj_()), (const ::GtkBitset*) (set_to_c), (guint) (target_to_c), (guint*) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::BitsetIter, guint> base::BitsetIterBase::init_at (const Gtk::Bitset_Ref set, guint target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint target, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_at;
  guint value_o {};
  auto target_to_c = target;
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  Gtk::BitsetIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (iter ? (::GtkBitsetIter*) (*iter).gobj_() : nullptr), (const ::GtkBitset*) (set_to_c), (guint) (target_to_c), (guint*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  auto &&tmp_return_3 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_bitset_iter_init_first (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint* value);
// gboolean gtk_bitset_iter_init_first (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint* value);
bool base::BitsetIterBase::init_first (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_first;
  guint value_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) ((::GtkBitsetIter*) (iter).gobj_()), (const ::GtkBitset*) (set_to_c), (guint*) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::BitsetIter, guint> base::BitsetIterBase::init_first (const Gtk::Bitset_Ref set) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_first;
  guint value_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  Gtk::BitsetIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (iter ? (::GtkBitsetIter*) (*iter).gobj_() : nullptr), (const ::GtkBitset*) (set_to_c), (guint*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  auto &&tmp_return_3 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_bitset_iter_init_last (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint* value);
// gboolean gtk_bitset_iter_init_last (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint* value);
bool base::BitsetIterBase::init_last (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_last;
  guint value_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) ((::GtkBitsetIter*) (iter).gobj_()), (const ::GtkBitset*) (set_to_c), (guint*) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::BitsetIter, guint> base::BitsetIterBase::init_last (const Gtk::Bitset_Ref set) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitsetIter* iter, const ::GtkBitset* set, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_iter_init_last;
  guint value_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none);
  Gtk::BitsetIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkBitsetIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkBitsetIter*) (iter ? (::GtkBitsetIter*) (*iter).gobj_() : nullptr), (const ::GtkBitset*) (set_to_c), (guint*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  auto &&tmp_return_3 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bitsetiter_extra_def_impl.hpp>)
#include <gtk/bitsetiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bitsetiter_extra_impl.hpp>)
#include <gtk/bitsetiter_extra_impl.hpp>
#endif
#endif

#endif
