// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLIST_HPP_
#define _GI_PANGO_ATTRLIST_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrIterator;
class AttrIterator_Ref;
class AttrList_Ref;
class Attribute;
class Attribute_Ref;

class AttrList;

namespace base {


#define GI_PANGO_ATTRLIST_BASE base::AttrListBase
class AttrListBase : public gi::detail::GBoxedWrapperBase<AttrListBase, ::PangoAttrList>
{
typedef gi::detail::GBoxedWrapperBase<AttrListBase, ::PangoAttrList> super_type;
public:

AttrListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attr_list_get_type(); } 

// PangoAttrList* /*full*/ pango_attr_list_new ();
// ::PangoAttrList* /*full*/ pango_attr_list_new ();
static GI_INLINE_DECL Pango::AttrList new_ () noexcept;

// void pango_attr_list_change (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_change (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
GI_INLINE_DECL void change (Pango::Attribute attr) noexcept;

// PangoAttrList* /*full,nullable*/ pango_attr_list_copy (PangoAttrList* list /*none,nullable*/);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_copy (::PangoAttrList* list /*none,nullable*/);
GI_INLINE_DECL Pango::AttrList copy () noexcept;

// gboolean pango_attr_list_equal (PangoAttrList* list /*none*/, PangoAttrList* other_list /*none*/);
// gboolean pango_attr_list_equal (::PangoAttrList* list /*none*/, ::PangoAttrList* other_list /*none*/);
GI_INLINE_DECL bool equal (Pango::AttrList_Ref other_list) noexcept;

// PangoAttrList* /*full,nullable*/ pango_attr_list_filter (PangoAttrList* list /*none*/, PangoAttrFilterFunc func /*none*/, gpointer data);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_filter (::PangoAttrList* list /*none*/, Pango::AttrFilterFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL Pango::AttrList filter (Pango::AttrFilterFunc func) noexcept;

// GSList* /*full*/ pango_attr_list_get_attributes (PangoAttrList* list /*none*/);
// ::GSList* /*full*/ pango_attr_list_get_attributes (::PangoAttrList* list /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t> get_attributes () noexcept;

// PangoAttrIterator* /*full*/ pango_attr_list_get_iterator (PangoAttrList* list /*none*/);
// ::PangoAttrIterator* /*full*/ pango_attr_list_get_iterator (::PangoAttrList* list /*none*/);
GI_INLINE_DECL Pango::AttrIterator get_iterator () noexcept;

// void pango_attr_list_insert (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_insert (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
GI_INLINE_DECL void insert (Pango::Attribute attr) noexcept;

// void pango_attr_list_insert_before (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_insert_before (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
GI_INLINE_DECL void insert_before (Pango::Attribute attr) noexcept;

// PangoAttrList* /*full*/ pango_attr_list_ref (PangoAttrList* list /*none,nullable*/);
// ::PangoAttrList* /*full*/ pango_attr_list_ref (::PangoAttrList* list /*none,nullable*/);
// IGNORE; marked ignore

// void pango_attr_list_splice (PangoAttrList* list /*none*/, PangoAttrList* other /*none*/, int pos, int len);
// void pango_attr_list_splice (::PangoAttrList* list /*none*/, ::PangoAttrList* other /*none*/, gint pos, gint len);
GI_INLINE_DECL void splice (Pango::AttrList_Ref other, gint pos, gint len) noexcept;

// char* /*full*/ pango_attr_list_to_string (PangoAttrList* list /*none*/);
// char* /*full*/ pango_attr_list_to_string (::PangoAttrList* list /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// void pango_attr_list_unref (PangoAttrList* list /*none,nullable*/);
// void pango_attr_list_unref (::PangoAttrList* list /*none,nullable*/);
// IGNORE; marked ignore

// void pango_attr_list_update (PangoAttrList* list /*none*/, int pos, int remove, int add);
// void pango_attr_list_update (::PangoAttrList* list /*none*/, gint pos, gint remove, gint add);
GI_INLINE_DECL void update (gint pos, gint remove, gint add) noexcept;

// PangoAttrList* /*full,nullable*/ pango_attr_list_from_string (const char* text /*none*/);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_from_string (const char* text /*none*/);
static GI_INLINE_DECL Pango::AttrList from_string (const gi::cstring_v text) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_def.hpp>)
#include <pango/attrlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra.hpp>)
#include <pango/attrlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrList_Ref;

class AttrList : public gi::detail::GBoxedWrapper<AttrList, ::PangoAttrList, GI_PANGO_ATTRLIST_BASE, AttrList_Ref>
{ typedef gi::detail::GBoxedWrapper<AttrList, ::PangoAttrList, GI_PANGO_ATTRLIST_BASE, AttrList_Ref> super_type; using super_type::super_type; };


class AttrList_Ref : public gi::detail::GBoxedRefWrapper<AttrList, ::PangoAttrList, GI_PANGO_ATTRLIST_BASE>
{ typedef gi::detail::GBoxedRefWrapper<AttrList, ::PangoAttrList, GI_PANGO_ATTRLIST_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrList>
{ typedef Pango::AttrList type; }; 

} // namespace repository

} // namespace gi

#endif
