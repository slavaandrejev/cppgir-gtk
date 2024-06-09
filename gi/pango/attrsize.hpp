// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSIZE_HPP_
#define _GI_PANGO_ATTRSIZE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrSize_Ref;
class Attribute;
class Attribute_Ref;

class AttrSize;

namespace base {


#define GI_PANGO_ATTRSIZE_BASE base::AttrSizeBase
class AttrSizeBase : public gi::detail::CBoxedWrapperBase<AttrSizeBase, ::PangoAttrSize>
{
typedef gi::detail::CBoxedWrapperBase<AttrSizeBase, ::PangoAttrSize> super_type;
public:

AttrSizeBase (std::nullptr_t = nullptr) : super_type() {}

// gint AttrSize::size (const ::PangoAttrSize* obj /*none*/);
// gint AttrSize::size (const ::PangoAttrSize* obj /*none*/);
GI_INLINE_DECL gint size_ () const noexcept;

//  AttrSize::size (::PangoAttrSize* obj /*none*/, gint _value);
// void AttrSize::size (::PangoAttrSize* obj /*none*/, gint _value);
GI_INLINE_DECL void size_ (gint _value) noexcept;

// guint AttrSize::absolute (const ::PangoAttrSize* obj /*none*/);
// guint AttrSize::absolute (const ::PangoAttrSize* obj /*none*/);
GI_INLINE_DECL guint absolute_ () const noexcept;

//  AttrSize::absolute (::PangoAttrSize* obj /*none*/, guint _value);
// void AttrSize::absolute (::PangoAttrSize* obj /*none*/, guint _value);
GI_INLINE_DECL void absolute_ (guint _value) noexcept;

// PangoAttribute* /*full*/ pango_attr_size_new (int size);
// ::PangoAttribute* /*full*/ pango_attr_size_new (gint size);
static GI_INLINE_DECL Pango::Attribute new_ (gint size) noexcept;

// PangoAttribute* /*full*/ pango_attr_size_new_absolute (int size);
// ::PangoAttribute* /*full*/ pango_attr_size_new_absolute (gint size);
static GI_INLINE_DECL Pango::Attribute new_absolute (gint size) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra_def.hpp>)
#include <pango/attrsize_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra.hpp>)
#include <pango/attrsize_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrSize_Ref;

class AttrSize : public gi::detail::CBoxedWrapper<AttrSize, ::PangoAttrSize, GI_PANGO_ATTRSIZE_BASE, AttrSize_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrSize, ::PangoAttrSize, GI_PANGO_ATTRSIZE_BASE, AttrSize_Ref> super_type; using super_type::super_type; };


class AttrSize_Ref : public gi::detail::CBoxedRefWrapper<AttrSize, ::PangoAttrSize, GI_PANGO_ATTRSIZE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrSize, ::PangoAttrSize, GI_PANGO_ATTRSIZE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrSize>
{ typedef Pango::AttrSize type; }; 

} // namespace repository

} // namespace gi

#endif
