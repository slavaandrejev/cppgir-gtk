// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRIBUTE_HPP_
#define _GI_PANGO_ATTRIBUTE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrClass;
class AttrClass_Ref;
class AttrColor;
class AttrColor_Ref;
class AttrFloat;
class AttrFloat_Ref;
class AttrFontDesc;
class AttrFontDesc_Ref;
class AttrFontFeatures;
class AttrFontFeatures_Ref;
class AttrInt;
class AttrInt_Ref;
class AttrLanguage;
class AttrLanguage_Ref;
class AttrShape;
class AttrShape_Ref;
class AttrSize;
class AttrSize_Ref;
class AttrString;
class AttrString_Ref;
class Attribute_Ref;

class Attribute;

namespace base {


#define GI_PANGO_ATTRIBUTE_BASE base::AttributeBase
class AttributeBase : public gi::detail::GBoxedWrapperBase<AttributeBase, ::PangoAttribute>
{
typedef gi::detail::GBoxedWrapperBase<AttributeBase, ::PangoAttribute> super_type;
public:

AttributeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attribute_get_type(); } 

// const ::PangoAttrClass* /*none*/ Attribute::klass (const ::PangoAttribute* obj /*none*/);
// const ::PangoAttrClass* /*none*/ Attribute::klass (const ::PangoAttribute* obj /*none*/);
GI_INLINE_DECL Pango::AttrClass_Ref klass_ () const noexcept;

// guint Attribute::start_index (const ::PangoAttribute* obj /*none*/);
// guint Attribute::start_index (const ::PangoAttribute* obj /*none*/);
GI_INLINE_DECL guint start_index_ () const noexcept;

//  Attribute::start_index (::PangoAttribute* obj /*none*/, guint _value);
// void Attribute::start_index (::PangoAttribute* obj /*none*/, guint _value);
GI_INLINE_DECL void start_index_ (guint _value) noexcept;

// guint Attribute::end_index (const ::PangoAttribute* obj /*none*/);
// guint Attribute::end_index (const ::PangoAttribute* obj /*none*/);
GI_INLINE_DECL guint end_index_ () const noexcept;

//  Attribute::end_index (::PangoAttribute* obj /*none*/, guint _value);
// void Attribute::end_index (::PangoAttribute* obj /*none*/, guint _value);
GI_INLINE_DECL void end_index_ (guint _value) noexcept;

// PangoAttrColor* /*none,nullable*/ pango_attribute_as_color (PangoAttribute* attr /*none*/);
// ::PangoAttrColor* /*none,nullable*/ pango_attribute_as_color (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrColor_Ref as_color () noexcept;

// PangoAttrFloat* /*none,nullable*/ pango_attribute_as_float (PangoAttribute* attr /*none*/);
// ::PangoAttrFloat* /*none,nullable*/ pango_attribute_as_float (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrFloat_Ref as_float () noexcept;

// PangoAttrFontDesc* /*none,nullable*/ pango_attribute_as_font_desc (PangoAttribute* attr /*none*/);
// ::PangoAttrFontDesc* /*none,nullable*/ pango_attribute_as_font_desc (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrFontDesc_Ref as_font_desc () noexcept;

// PangoAttrFontFeatures* /*none,nullable*/ pango_attribute_as_font_features (PangoAttribute* attr /*none*/);
// ::PangoAttrFontFeatures* /*none,nullable*/ pango_attribute_as_font_features (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrFontFeatures_Ref as_font_features () noexcept;

// PangoAttrInt* /*none,nullable*/ pango_attribute_as_int (PangoAttribute* attr /*none*/);
// ::PangoAttrInt* /*none,nullable*/ pango_attribute_as_int (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrInt_Ref as_int () noexcept;

// PangoAttrLanguage* /*none,nullable*/ pango_attribute_as_language (PangoAttribute* attr /*none*/);
// ::PangoAttrLanguage* /*none,nullable*/ pango_attribute_as_language (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrLanguage_Ref as_language () noexcept;

// PangoAttrShape* /*none,nullable*/ pango_attribute_as_shape (PangoAttribute* attr /*none*/);
// ::PangoAttrShape* /*none,nullable*/ pango_attribute_as_shape (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrShape_Ref as_shape () noexcept;

// PangoAttrSize* /*none,nullable*/ pango_attribute_as_size (PangoAttribute* attr /*none*/);
// ::PangoAttrSize* /*none,nullable*/ pango_attribute_as_size (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrSize_Ref as_size () noexcept;

// PangoAttrString* /*none,nullable*/ pango_attribute_as_string (PangoAttribute* attr /*none*/);
// ::PangoAttrString* /*none,nullable*/ pango_attribute_as_string (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::AttrString_Ref as_string () noexcept;

// PangoAttribute* /*full*/ pango_attribute_copy (const PangoAttribute* attr /*none*/);
// ::PangoAttribute* /*full*/ pango_attribute_copy (const ::PangoAttribute* attr /*none*/);
GI_INLINE_DECL Pango::Attribute copy () const noexcept;

// void pango_attribute_destroy (PangoAttribute* attr /*none*/);
// void pango_attribute_destroy (::PangoAttribute* attr /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// gboolean pango_attribute_equal (const PangoAttribute* attr1 /*none*/, const PangoAttribute* attr2 /*none*/);
// gboolean pango_attribute_equal (const ::PangoAttribute* attr1 /*none*/, const ::PangoAttribute* attr2 /*none*/);
GI_INLINE_DECL bool equal (const Pango::Attribute_Ref attr2) const noexcept;

// void pango_attribute_init (PangoAttribute* attr /*none*/, const PangoAttrClass* klass /*none*/);
// void pango_attribute_init (::PangoAttribute* attr /*none*/, const ::PangoAttrClass* klass /*none*/);
GI_INLINE_DECL void init (const Pango::AttrClass_Ref klass) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_def.hpp>)
#include <pango/attribute_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attribute_extra.hpp>)
#include <pango/attribute_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Attribute_Ref;

class Attribute : public gi::detail::GBoxedWrapper<Attribute, ::PangoAttribute, GI_PANGO_ATTRIBUTE_BASE, Attribute_Ref>
{ typedef gi::detail::GBoxedWrapper<Attribute, ::PangoAttribute, GI_PANGO_ATTRIBUTE_BASE, Attribute_Ref> super_type; using super_type::super_type; };


class Attribute_Ref : public gi::detail::GBoxedRefWrapper<Attribute, ::PangoAttribute, GI_PANGO_ATTRIBUTE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Attribute, ::PangoAttribute, GI_PANGO_ATTRIBUTE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttribute>
{ typedef Pango::Attribute type; }; 

} // namespace repository

} // namespace gi

#endif
