// AUTO-GENERATED

#ifndef _GI_GTK_BITSET_HPP_
#define _GI_GTK_BITSET_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Bitset_Ref;

class Bitset;

namespace base {


#define GI_GTK_BITSET_BASE base::BitsetBase
class BitsetBase : public gi::detail::GBoxedWrapperBase<BitsetBase, ::GtkBitset>
{
typedef gi::detail::GBoxedWrapperBase<BitsetBase, ::GtkBitset> super_type;
public:

BitsetBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_bitset_get_type(); } 

// GtkBitset* /*full*/ gtk_bitset_new_empty ();
// ::GtkBitset* /*full*/ gtk_bitset_new_empty ();
static GI_INLINE_DECL Gtk::Bitset new_empty () noexcept;

// GtkBitset* /*full*/ gtk_bitset_new_range (guint start, guint n_items);
// ::GtkBitset* /*full*/ gtk_bitset_new_range (guint start, guint n_items);
static GI_INLINE_DECL Gtk::Bitset new_range (guint start, guint n_items) noexcept;

// gboolean gtk_bitset_add (GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_add (::GtkBitset* self /*none*/, guint value);
GI_INLINE_DECL bool add (guint value) noexcept;

// void gtk_bitset_add_range (GtkBitset* self /*none*/, guint start, guint n_items);
// void gtk_bitset_add_range (::GtkBitset* self /*none*/, guint start, guint n_items);
GI_INLINE_DECL void add_range (guint start, guint n_items) noexcept;

// void gtk_bitset_add_range_closed (GtkBitset* self /*none*/, guint first, guint last);
// void gtk_bitset_add_range_closed (::GtkBitset* self /*none*/, guint first, guint last);
GI_INLINE_DECL void add_range_closed (guint first, guint last) noexcept;

// void gtk_bitset_add_rectangle (GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
// void gtk_bitset_add_rectangle (::GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
GI_INLINE_DECL void add_rectangle (guint start, guint width, guint height, guint stride) noexcept;

// gboolean gtk_bitset_contains (const GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_contains (const ::GtkBitset* self /*none*/, guint value);
GI_INLINE_DECL bool contains (guint value) const noexcept;

// GtkBitset* /*full*/ gtk_bitset_copy (const GtkBitset* self /*none*/);
// ::GtkBitset* /*full*/ gtk_bitset_copy (const ::GtkBitset* self /*none*/);
GI_INLINE_DECL Gtk::Bitset copy () const noexcept;

// void gtk_bitset_difference (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_difference (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
GI_INLINE_DECL void difference (const Gtk::Bitset_Ref other) noexcept;

// gboolean gtk_bitset_equals (const GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// gboolean gtk_bitset_equals (const ::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
GI_INLINE_DECL bool equals (const Gtk::Bitset_Ref other) const noexcept;

// guint gtk_bitset_get_maximum (const GtkBitset* self /*none*/);
// guint gtk_bitset_get_maximum (const ::GtkBitset* self /*none*/);
GI_INLINE_DECL guint get_maximum () const noexcept;

// guint gtk_bitset_get_minimum (const GtkBitset* self /*none*/);
// guint gtk_bitset_get_minimum (const ::GtkBitset* self /*none*/);
GI_INLINE_DECL guint get_minimum () const noexcept;

// guint gtk_bitset_get_nth (const GtkBitset* self /*none*/, guint nth);
// guint gtk_bitset_get_nth (const ::GtkBitset* self /*none*/, guint nth);
GI_INLINE_DECL guint get_nth (guint nth) const noexcept;

// guint64 gtk_bitset_get_size (const GtkBitset* self /*none*/);
// guint64 gtk_bitset_get_size (const ::GtkBitset* self /*none*/);
GI_INLINE_DECL guint64 get_size () const noexcept;

// guint64 gtk_bitset_get_size_in_range (const GtkBitset* self /*none*/, guint first, guint last);
// guint64 gtk_bitset_get_size_in_range (const ::GtkBitset* self /*none*/, guint first, guint last);
GI_INLINE_DECL guint64 get_size_in_range (guint first, guint last) const noexcept;

// void gtk_bitset_intersect (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_intersect (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
GI_INLINE_DECL void intersect (const Gtk::Bitset_Ref other) noexcept;

// gboolean gtk_bitset_is_empty (const GtkBitset* self /*none*/);
// gboolean gtk_bitset_is_empty (const ::GtkBitset* self /*none*/);
GI_INLINE_DECL bool is_empty () const noexcept;

// GtkBitset* /*none*/ gtk_bitset_ref (GtkBitset* self /*none,nullable*/);
// ::GtkBitset* /*none*/ gtk_bitset_ref (::GtkBitset* self /*none,nullable*/);
// IGNORE; marked ignore

// gboolean gtk_bitset_remove (GtkBitset* self /*none*/, guint value);
// gboolean gtk_bitset_remove (::GtkBitset* self /*none*/, guint value);
GI_INLINE_DECL bool remove (guint value) noexcept;

// void gtk_bitset_remove_all (GtkBitset* self /*none*/);
// void gtk_bitset_remove_all (::GtkBitset* self /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void gtk_bitset_remove_range (GtkBitset* self /*none*/, guint start, guint n_items);
// void gtk_bitset_remove_range (::GtkBitset* self /*none*/, guint start, guint n_items);
GI_INLINE_DECL void remove_range (guint start, guint n_items) noexcept;

// void gtk_bitset_remove_range_closed (GtkBitset* self /*none*/, guint first, guint last);
// void gtk_bitset_remove_range_closed (::GtkBitset* self /*none*/, guint first, guint last);
GI_INLINE_DECL void remove_range_closed (guint first, guint last) noexcept;

// void gtk_bitset_remove_rectangle (GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
// void gtk_bitset_remove_rectangle (::GtkBitset* self /*none*/, guint start, guint width, guint height, guint stride);
GI_INLINE_DECL void remove_rectangle (guint start, guint width, guint height, guint stride) noexcept;

// void gtk_bitset_shift_left (GtkBitset* self /*none*/, guint amount);
// void gtk_bitset_shift_left (::GtkBitset* self /*none*/, guint amount);
GI_INLINE_DECL void shift_left (guint amount) noexcept;

// void gtk_bitset_shift_right (GtkBitset* self /*none*/, guint amount);
// void gtk_bitset_shift_right (::GtkBitset* self /*none*/, guint amount);
GI_INLINE_DECL void shift_right (guint amount) noexcept;

// void gtk_bitset_splice (GtkBitset* self /*none*/, guint position, guint removed, guint added);
// void gtk_bitset_splice (::GtkBitset* self /*none*/, guint position, guint removed, guint added);
GI_INLINE_DECL void splice (guint position, guint removed, guint added) noexcept;

// void gtk_bitset_subtract (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_subtract (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
GI_INLINE_DECL void subtract (const Gtk::Bitset_Ref other) noexcept;

// void gtk_bitset_union (GtkBitset* self /*none*/, const GtkBitset* other /*none*/);
// void gtk_bitset_union (::GtkBitset* self /*none*/, const ::GtkBitset* other /*none*/);
GI_INLINE_DECL void union_ (const Gtk::Bitset_Ref other) noexcept;

// void gtk_bitset_unref (GtkBitset* self /*none,nullable*/);
// void gtk_bitset_unref (::GtkBitset* self /*none,nullable*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bitset_extra_def.hpp>)
#include <gtk/bitset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bitset_extra.hpp>)
#include <gtk/bitset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Bitset_Ref;

class Bitset : public gi::detail::GBoxedWrapper<Bitset, ::GtkBitset, GI_GTK_BITSET_BASE, Bitset_Ref>
{ typedef gi::detail::GBoxedWrapper<Bitset, ::GtkBitset, GI_GTK_BITSET_BASE, Bitset_Ref> super_type; using super_type::super_type; };


class Bitset_Ref : public gi::detail::GBoxedRefWrapper<Bitset, ::GtkBitset, GI_GTK_BITSET_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Bitset, ::GtkBitset, GI_GTK_BITSET_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBitset>
{ typedef Gtk::Bitset type; }; 

} // namespace repository

} // namespace gi

#endif
