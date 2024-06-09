// AUTO-GENERATED

#ifndef _GI_PANGO_ITEM_HPP_
#define _GI_PANGO_ITEM_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrIterator;
class AttrIterator_Ref;
class Item_Ref;

class Item;

namespace base {


#define GI_PANGO_ITEM_BASE base::ItemBase
class ItemBase : public gi::detail::GBoxedWrapperBase<ItemBase, ::PangoItem>
{
typedef gi::detail::GBoxedWrapperBase<ItemBase, ::PangoItem> super_type;
public:

ItemBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_item_get_type(); } 

// gint Item::offset (const ::PangoItem* obj /*none*/);
// gint Item::offset (const ::PangoItem* obj /*none*/);
GI_INLINE_DECL gint offset_ () const noexcept;

//  Item::offset (::PangoItem* obj /*none*/, gint _value);
// void Item::offset (::PangoItem* obj /*none*/, gint _value);
GI_INLINE_DECL void offset_ (gint _value) noexcept;

// gint Item::length (const ::PangoItem* obj /*none*/);
// gint Item::length (const ::PangoItem* obj /*none*/);
GI_INLINE_DECL gint length_ () const noexcept;

//  Item::length (::PangoItem* obj /*none*/, gint _value);
// void Item::length (::PangoItem* obj /*none*/, gint _value);
GI_INLINE_DECL void length_ (gint _value) noexcept;

// gint Item::num_chars (const ::PangoItem* obj /*none*/);
// gint Item::num_chars (const ::PangoItem* obj /*none*/);
GI_INLINE_DECL gint num_chars_ () const noexcept;

//  Item::num_chars (::PangoItem* obj /*none*/, gint _value);
// void Item::num_chars (::PangoItem* obj /*none*/, gint _value);
GI_INLINE_DECL void num_chars_ (gint _value) noexcept;

// PangoItem* /*full*/ pango_item_new ();
// ::PangoItem* /*full*/ pango_item_new ();
static GI_INLINE_DECL Pango::Item new_ () noexcept;

// void pango_item_apply_attrs (PangoItem* item /*none*/, PangoAttrIterator* iter /*none*/);
// void pango_item_apply_attrs (::PangoItem* item /*none*/, ::PangoAttrIterator* iter /*none*/);
GI_INLINE_DECL void apply_attrs (Pango::AttrIterator_Ref iter) noexcept;

// PangoItem* /*full,nullable*/ pango_item_copy (PangoItem* item /*none,nullable*/);
// ::PangoItem* /*full,nullable*/ pango_item_copy (::PangoItem* item /*none,nullable*/);
GI_INLINE_DECL Pango::Item copy () noexcept;

// void pango_item_free (PangoItem* item /*none,nullable*/);
// void pango_item_free (::PangoItem* item /*none,nullable*/);
// IGNORE; marked ignore

// PangoItem* /*full*/ pango_item_split (PangoItem* orig /*none*/, int split_index, int split_offset);
// ::PangoItem* /*full*/ pango_item_split (::PangoItem* orig /*none*/, gint split_index, gint split_offset);
GI_INLINE_DECL Pango::Item split (gint split_index, gint split_offset) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/item_extra_def.hpp>)
#include <pango/item_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/item_extra.hpp>)
#include <pango/item_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Item_Ref;

class Item : public gi::detail::GBoxedWrapper<Item, ::PangoItem, GI_PANGO_ITEM_BASE, Item_Ref>
{ typedef gi::detail::GBoxedWrapper<Item, ::PangoItem, GI_PANGO_ITEM_BASE, Item_Ref> super_type; using super_type::super_type; };


class Item_Ref : public gi::detail::GBoxedRefWrapper<Item, ::PangoItem, GI_PANGO_ITEM_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Item, ::PangoItem, GI_PANGO_ITEM_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoItem>
{ typedef Pango::Item type; }; 

} // namespace repository

} // namespace gi

#endif
