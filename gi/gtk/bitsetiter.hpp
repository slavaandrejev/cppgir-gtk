// AUTO-GENERATED

#ifndef _GI_GTK_BITSETITER_HPP_
#define _GI_GTK_BITSETITER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Bitset;
class BitsetIter_Ref;
class Bitset_Ref;

class BitsetIter;

namespace base {


#define GI_GTK_BITSETITER_BASE base::BitsetIterBase
class BitsetIterBase : public gi::detail::GBoxedWrapperBase<BitsetIterBase, ::GtkBitsetIter>
{
typedef gi::detail::GBoxedWrapperBase<BitsetIterBase, ::GtkBitsetIter> super_type;
public:

BitsetIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_bitset_iter_get_type(); } 

// guint gtk_bitset_iter_get_value (const GtkBitsetIter* iter /*none*/);
// guint gtk_bitset_iter_get_value (const ::GtkBitsetIter* iter /*none*/);
GI_INLINE_DECL guint get_value () const noexcept;

// gboolean gtk_bitset_iter_is_valid (const GtkBitsetIter* iter /*none*/);
// gboolean gtk_bitset_iter_is_valid (const ::GtkBitsetIter* iter /*none*/);
GI_INLINE_DECL bool is_valid () const noexcept;

// gboolean gtk_bitset_iter_next (GtkBitsetIter* iter /*none*/, guint* value);
// gboolean gtk_bitset_iter_next (::GtkBitsetIter* iter /*none*/, guint* value);
GI_INLINE_DECL bool next (guint * value) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> next () noexcept;

// gboolean gtk_bitset_iter_previous (GtkBitsetIter* iter /*none*/, guint* value);
// gboolean gtk_bitset_iter_previous (::GtkBitsetIter* iter /*none*/, guint* value);
GI_INLINE_DECL bool previous (guint * value) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> previous () noexcept;

// gboolean gtk_bitset_iter_init_at (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint target, guint* value);
// gboolean gtk_bitset_iter_init_at (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint target, guint* value);
static GI_INLINE_DECL bool init_at (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint target, guint * value) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gtk::BitsetIter, guint> init_at (const Gtk::Bitset_Ref set, guint target) noexcept;

// gboolean gtk_bitset_iter_init_first (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint* value);
// gboolean gtk_bitset_iter_init_first (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint* value);
static GI_INLINE_DECL bool init_first (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint * value) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gtk::BitsetIter, guint> init_first (const Gtk::Bitset_Ref set) noexcept;

// gboolean gtk_bitset_iter_init_last (GtkBitsetIter* iter /*none,out,ca*/, const GtkBitset* set /*none*/, guint* value);
// gboolean gtk_bitset_iter_init_last (::GtkBitsetIter* iter /*none,out,ca*/, const ::GtkBitset* set /*none*/, guint* value);
static GI_INLINE_DECL bool init_last (Gtk::BitsetIter & iter, const Gtk::Bitset_Ref set, guint * value) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gtk::BitsetIter, guint> init_last (const Gtk::Bitset_Ref set) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bitsetiter_extra_def.hpp>)
#include <gtk/bitsetiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bitsetiter_extra.hpp>)
#include <gtk/bitsetiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BitsetIter_Ref;

class BitsetIter : public gi::detail::GBoxedWrapper<BitsetIter, ::GtkBitsetIter, GI_GTK_BITSETITER_BASE, BitsetIter_Ref>
{ typedef gi::detail::GBoxedWrapper<BitsetIter, ::GtkBitsetIter, GI_GTK_BITSETITER_BASE, BitsetIter_Ref> super_type; using super_type::super_type; };


class BitsetIter_Ref : public gi::detail::GBoxedRefWrapper<BitsetIter, ::GtkBitsetIter, GI_GTK_BITSETITER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<BitsetIter, ::GtkBitsetIter, GI_GTK_BITSETITER_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBitsetIter>
{ typedef Gtk::BitsetIter type; }; 

} // namespace repository

} // namespace gi

#endif
