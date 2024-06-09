// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRITERATOR_HPP_
#define _GI_PANGO_ATTRITERATOR_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrIterator_Ref;
class Attribute;
class Attribute_Ref;
class FontDescription;
class FontDescription_Ref;
class Language;
class Language_Ref;

class AttrIterator;

namespace base {


#define GI_PANGO_ATTRITERATOR_BASE base::AttrIteratorBase
class AttrIteratorBase : public gi::detail::GBoxedWrapperBase<AttrIteratorBase, ::PangoAttrIterator>
{
typedef gi::detail::GBoxedWrapperBase<AttrIteratorBase, ::PangoAttrIterator> super_type;
public:

AttrIteratorBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attr_iterator_get_type(); } 

// PangoAttrIterator* /*full*/ pango_attr_iterator_copy (PangoAttrIterator* iterator /*none*/);
// ::PangoAttrIterator* /*full*/ pango_attr_iterator_copy (::PangoAttrIterator* iterator /*none*/);
GI_INLINE_DECL Pango::AttrIterator copy () noexcept;

// void pango_attr_iterator_destroy (PangoAttrIterator* iterator /*none*/);
// void pango_attr_iterator_destroy (::PangoAttrIterator* iterator /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// PangoAttribute* /*none,nullable*/ pango_attr_iterator_get (PangoAttrIterator* iterator /*none*/, PangoAttrType type);
// ::PangoAttribute* /*none,nullable*/ pango_attr_iterator_get (::PangoAttrIterator* iterator /*none*/, ::PangoAttrType type);
GI_INLINE_DECL Pango::Attribute_Ref get (Pango::AttrType type) noexcept;

// GSList* /*full*/ pango_attr_iterator_get_attrs (PangoAttrIterator* iterator /*none*/);
// ::GSList* /*full*/ pango_attr_iterator_get_attrs (::PangoAttrIterator* iterator /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t> get_attrs () noexcept;

// void pango_attr_iterator_get_font (PangoAttrIterator* iterator /*none*/, PangoFontDescription* desc /*none*/, PangoLanguage** language /*full,out,opt*/, GSList** extra_attrs /*full,out,opt*/);
// void pango_attr_iterator_get_font (::PangoAttrIterator* iterator /*none*/, ::PangoFontDescription* desc /*none*/, ::PangoLanguage** language /*full,out,opt*/, ::GSList** extra_attrs /*full,out,opt*/);
GI_INLINE_DECL void get_font (Pango::FontDescription_Ref desc, Pango::Language * language, gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t> * extra_attrs) noexcept;
GI_INLINE_DECL std::tuple<Pango::Language, gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t>> get_font (Pango::FontDescription_Ref desc) noexcept;

// gboolean pango_attr_iterator_next (PangoAttrIterator* iterator /*none*/);
// gboolean pango_attr_iterator_next (::PangoAttrIterator* iterator /*none*/);
GI_INLINE_DECL bool next () noexcept;

// void pango_attr_iterator_range (PangoAttrIterator* iterator /*none*/, int* start, int* end);
// void pango_attr_iterator_range (::PangoAttrIterator* iterator /*none*/, gint* start, gint* end);
GI_INLINE_DECL void range (gint & start, gint & end) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> range () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra_def.hpp>)
#include <pango/attriterator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra.hpp>)
#include <pango/attriterator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrIterator_Ref;

class AttrIterator : public gi::detail::GBoxedWrapper<AttrIterator, ::PangoAttrIterator, GI_PANGO_ATTRITERATOR_BASE, AttrIterator_Ref>
{ typedef gi::detail::GBoxedWrapper<AttrIterator, ::PangoAttrIterator, GI_PANGO_ATTRITERATOR_BASE, AttrIterator_Ref> super_type; using super_type::super_type; };


class AttrIterator_Ref : public gi::detail::GBoxedRefWrapper<AttrIterator, ::PangoAttrIterator, GI_PANGO_ATTRITERATOR_BASE>
{ typedef gi::detail::GBoxedRefWrapper<AttrIterator, ::PangoAttrIterator, GI_PANGO_ATTRITERATOR_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrIterator>
{ typedef Pango::AttrIterator type; }; 

} // namespace repository

} // namespace gi

#endif
