// AUTO-GENERATED

#ifndef _GI_GTK_BITSET_IMPL_HPP_
#define _GI_GTK_BITSET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkBitset* /*full*/ gtk_bitset_new_empty ();
// ::GtkBitset* /*full*/ gtk_bitset_new_empty ();
Gtk::Bitset base::BitsetBase::new_empty () noexcept
{
  typedef ::GtkBitset* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bitset_new_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBitset* /*full*/ gtk_bitset_new_range (guint start, guint n_items);
// ::GtkBitset* /*full*/ gtk_bitset_new_range (guint start, guint n_items);
Gtk::Bitset base::BitsetBase::new_range (guint start, guint n_items) noexcept
{
  typedef ::GtkBitset* (*call_wrap_t) (guint start, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bitset_new_range;
  auto n_items_to_c = n_items;
  auto start_to_c = start;
  auto _temp_ret = call_wrap_v ((guint) (start_to_c), (guint) (n_items_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_bitset_add (GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_add (::GtkBitset* self /*none*/, guint value);
bool base::BitsetBase::add (guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitset* self, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_add;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (value_to_c));
  return _temp_ret;
}

// void gtk_bitset_add_range (GtkBitset* self /*none*/, guint start, guint n_items);
// void gtk_bitset_add_range (::GtkBitset* self /*none*/, guint start, guint n_items);
void base::BitsetBase::add_range (guint start, guint n_items) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint start, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_add_range;
  auto n_items_to_c = n_items;
  auto start_to_c = start;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (start_to_c), (guint) (n_items_to_c));
}

// void gtk_bitset_add_range_closed (GtkBitset* self /*none*/, guint first, guint last);
// void gtk_bitset_add_range_closed (::GtkBitset* self /*none*/, guint first, guint last);
void base::BitsetBase::add_range_closed (guint first, guint last) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint first, guint last);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_add_range_closed;
  auto last_to_c = last;
  auto first_to_c = first;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (first_to_c), (guint) (last_to_c));
}

// void gtk_bitset_add_rectangle (GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
// void gtk_bitset_add_rectangle (::GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
void base::BitsetBase::add_rectangle (guint start, guint width, guint height, guint stride) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint start, guint width, guint height, guint stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_add_rectangle;
  auto stride_to_c = stride;
  auto height_to_c = height;
  auto width_to_c = width;
  auto start_to_c = start;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (start_to_c), (guint) (width_to_c), (guint) (height_to_c), (guint) (stride_to_c));
}

// gboolean gtk_bitset_contains (const GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_contains (const ::GtkBitset* self /*none*/, guint value);
bool base::BitsetBase::contains (guint value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkBitset* self, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_contains;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()), (guint) (value_to_c));
  return _temp_ret;
}

// GtkBitset* /*full*/ gtk_bitset_copy (const GtkBitset* self /*none*/);
// ::GtkBitset* /*full*/ gtk_bitset_copy (const ::GtkBitset* self /*none*/);
Gtk::Bitset base::BitsetBase::copy () const noexcept
{
  typedef ::GtkBitset* (*call_wrap_t) (const ::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_bitset_difference (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_difference (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
void base::BitsetBase::difference (const Gtk::Bitset_Ref other) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, const ::GtkBitset* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_difference;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  call_wrap_v ((::GtkBitset*) (gobj_()), (const ::GtkBitset*) (other_to_c));
}

// gboolean gtk_bitset_equals (const GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// gboolean gtk_bitset_equals (const ::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
bool base::BitsetBase::equals (const Gtk::Bitset_Ref other) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkBitset* self, const ::GtkBitset* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_equals;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()), (const ::GtkBitset*) (other_to_c));
  return _temp_ret;
}

// guint gtk_bitset_get_maximum (const GtkBitset* self /*none*/);
// guint gtk_bitset_get_maximum (const ::GtkBitset* self /*none*/);
guint base::BitsetBase::get_maximum () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_get_maximum;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()));
  return _temp_ret;
}

// guint gtk_bitset_get_minimum (const GtkBitset* self /*none*/);
// guint gtk_bitset_get_minimum (const ::GtkBitset* self /*none*/);
guint base::BitsetBase::get_minimum () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_get_minimum;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()));
  return _temp_ret;
}

// guint gtk_bitset_get_nth (const GtkBitset* self /*none*/, guint nth);
// guint gtk_bitset_get_nth (const ::GtkBitset* self /*none*/, guint nth);
guint base::BitsetBase::get_nth (guint nth) const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBitset* self, guint nth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_get_nth;
  auto nth_to_c = nth;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()), (guint) (nth_to_c));
  return _temp_ret;
}

// guint64 gtk_bitset_get_size (const GtkBitset* self /*none*/);
// guint64 gtk_bitset_get_size (const ::GtkBitset* self /*none*/);
guint64 base::BitsetBase::get_size () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_get_size;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()));
  return _temp_ret;
}

// guint64 gtk_bitset_get_size_in_range (const GtkBitset* self /*none*/, guint first, guint last);
// guint64 gtk_bitset_get_size_in_range (const ::GtkBitset* self /*none*/, guint first, guint last);
guint64 base::BitsetBase::get_size_in_range (guint first, guint last) const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GtkBitset* self, guint first, guint last);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_get_size_in_range;
  auto last_to_c = last;
  auto first_to_c = first;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()), (guint) (first_to_c), (guint) (last_to_c));
  return _temp_ret;
}

// void gtk_bitset_intersect (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_intersect (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
void base::BitsetBase::intersect (const Gtk::Bitset_Ref other) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, const ::GtkBitset* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_intersect;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  call_wrap_v ((::GtkBitset*) (gobj_()), (const ::GtkBitset*) (other_to_c));
}

// gboolean gtk_bitset_is_empty (const GtkBitset* self /*none*/);
// gboolean gtk_bitset_is_empty (const ::GtkBitset* self /*none*/);
bool base::BitsetBase::is_empty () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_is_empty;
  auto _temp_ret = call_wrap_v ((const ::GtkBitset*) (gobj_()));
  return _temp_ret;
}

// GtkBitset* /*none*/ gtk_bitset_ref (GtkBitset* self /*none,nullable*/);
// ::GtkBitset* /*none*/ gtk_bitset_ref (::GtkBitset* self /*none,nullable*/);
// IGNORE; marked ignore

// gboolean gtk_bitset_remove (GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_remove (::GtkBitset* self /*none*/, guint value);
bool base::BitsetBase::remove (guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBitset* self, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_remove;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (value_to_c));
  return _temp_ret;
}

// void gtk_bitset_remove_all (GtkBitset* self /*none*/);
// void gtk_bitset_remove_all (::GtkBitset* self /*none*/);
void base::BitsetBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_remove_all;
  call_wrap_v ((::GtkBitset*) (gobj_()));
}

// void gtk_bitset_remove_range (GtkBitset* self /*none*/, guint start, guint n_items);
// void gtk_bitset_remove_range (::GtkBitset* self /*none*/, guint start, guint n_items);
void base::BitsetBase::remove_range (guint start, guint n_items) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint start, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_remove_range;
  auto n_items_to_c = n_items;
  auto start_to_c = start;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (start_to_c), (guint) (n_items_to_c));
}

// void gtk_bitset_remove_range_closed (GtkBitset* self /*none*/, guint first, guint last);
// void gtk_bitset_remove_range_closed (::GtkBitset* self /*none*/, guint first, guint last);
void base::BitsetBase::remove_range_closed (guint first, guint last) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint first, guint last);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_remove_range_closed;
  auto last_to_c = last;
  auto first_to_c = first;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (first_to_c), (guint) (last_to_c));
}

// void gtk_bitset_remove_rectangle (GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
// void gtk_bitset_remove_rectangle (::GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
void base::BitsetBase::remove_rectangle (guint start, guint width, guint height, guint stride) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint start, guint width, guint height, guint stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_remove_rectangle;
  auto stride_to_c = stride;
  auto height_to_c = height;
  auto width_to_c = width;
  auto start_to_c = start;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (start_to_c), (guint) (width_to_c), (guint) (height_to_c), (guint) (stride_to_c));
}

// void gtk_bitset_shift_left (GtkBitset* self /*none*/, guint amount);
// void gtk_bitset_shift_left (::GtkBitset* self /*none*/, guint amount);
void base::BitsetBase::shift_left (guint amount) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint amount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_shift_left;
  auto amount_to_c = amount;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (amount_to_c));
}

// void gtk_bitset_shift_right (GtkBitset* self /*none*/, guint amount);
// void gtk_bitset_shift_right (::GtkBitset* self /*none*/, guint amount);
void base::BitsetBase::shift_right (guint amount) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint amount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_shift_right;
  auto amount_to_c = amount;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (amount_to_c));
}

// void gtk_bitset_splice (GtkBitset* self /*none*/, guint position, guint removed, guint added);
// void gtk_bitset_splice (::GtkBitset* self /*none*/, guint position, guint removed, guint added);
void base::BitsetBase::splice (guint position, guint removed, guint added) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, guint position, guint removed, guint added);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_splice;
  auto added_to_c = added;
  auto removed_to_c = removed;
  auto position_to_c = position;
  call_wrap_v ((::GtkBitset*) (gobj_()), (guint) (position_to_c), (guint) (removed_to_c), (guint) (added_to_c));
}

// void gtk_bitset_subtract (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_subtract (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
void base::BitsetBase::subtract (const Gtk::Bitset_Ref other) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, const ::GtkBitset* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_subtract;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  call_wrap_v ((::GtkBitset*) (gobj_()), (const ::GtkBitset*) (other_to_c));
}

// void gtk_bitset_union (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_union (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
void base::BitsetBase::union_ (const Gtk::Bitset_Ref other) noexcept
{
  typedef void (*call_wrap_t) (::GtkBitset* self, const ::GtkBitset* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bitset_union;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  call_wrap_v ((::GtkBitset*) (gobj_()), (const ::GtkBitset*) (other_to_c));
}

// void gtk_bitset_unref (GtkBitset* self /*none,nullable*/);
// void gtk_bitset_unref (::GtkBitset* self /*none,nullable*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bitset_extra_def_impl.hpp>)
#include <gtk/bitset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bitset_extra_impl.hpp>)
#include <gtk/bitset_extra_impl.hpp>
#endif
#endif

#endif
