// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRIBUTE_IMPL_HPP_
#define _GI_PANGO_ATTRIBUTE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static const ::PangoAttrClass* _field_klass_get (const ::PangoAttribute* obj) { return (const ::PangoAttrClass*) obj->klass; }
// const ::PangoAttrClass* /*none*/ Attribute::klass (const ::PangoAttribute* obj /*none*/);
// const ::PangoAttrClass* /*none*/ Attribute::klass (const ::PangoAttribute* obj /*none*/);
Pango::AttrClass_Ref base::AttributeBase::klass_ () const noexcept
{
  typedef const ::PangoAttrClass* (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_klass_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static guint _field_start_index_get (const ::PangoAttribute* obj) { return (guint) obj->start_index; }
// guint Attribute::start_index (const ::PangoAttribute* obj /*none*/);
// guint Attribute::start_index (const ::PangoAttribute* obj /*none*/);
guint base::AttributeBase::start_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return _temp_ret;
}

static void _field_start_index_set (::PangoAttribute* obj, guint _value) { obj->start_index = (decltype(obj->start_index)) _value; }
//  Attribute::start_index (::PangoAttribute* obj /*none*/, guint _value);
// void Attribute::start_index (::PangoAttribute* obj /*none*/, guint _value);
void base::AttributeBase::start_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttribute*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_end_index_get (const ::PangoAttribute* obj) { return (guint) obj->end_index; }
// guint Attribute::end_index (const ::PangoAttribute* obj /*none*/);
// guint Attribute::end_index (const ::PangoAttribute* obj /*none*/);
guint base::AttributeBase::end_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return _temp_ret;
}

static void _field_end_index_set (::PangoAttribute* obj, guint _value) { obj->end_index = (decltype(obj->end_index)) _value; }
//  Attribute::end_index (::PangoAttribute* obj /*none*/, guint _value);
// void Attribute::end_index (::PangoAttribute* obj /*none*/, guint _value);
void base::AttributeBase::end_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttribute*) (gobj_()), (guint) (_value_to_c));
}

// PangoAttrColor* /*none,nullable*/ pango_attribute_as_color (PangoAttribute* attr /*none*/);
// ::PangoAttrColor* /*none,nullable*/ pango_attribute_as_color (::PangoAttribute* attr /*none*/);
Pango::AttrColor_Ref base::AttributeBase::as_color () noexcept
{
  typedef ::PangoAttrColor* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_color;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrFloat* /*none,nullable*/ pango_attribute_as_float (PangoAttribute* attr /*none*/);
// ::PangoAttrFloat* /*none,nullable*/ pango_attribute_as_float (::PangoAttribute* attr /*none*/);
Pango::AttrFloat_Ref base::AttributeBase::as_float () noexcept
{
  typedef ::PangoAttrFloat* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_float;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrFontDesc* /*none,nullable*/ pango_attribute_as_font_desc (PangoAttribute* attr /*none*/);
// ::PangoAttrFontDesc* /*none,nullable*/ pango_attribute_as_font_desc (::PangoAttribute* attr /*none*/);
Pango::AttrFontDesc_Ref base::AttributeBase::as_font_desc () noexcept
{
  typedef ::PangoAttrFontDesc* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_font_desc;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrFontFeatures* /*none,nullable*/ pango_attribute_as_font_features (PangoAttribute* attr /*none*/);
// ::PangoAttrFontFeatures* /*none,nullable*/ pango_attribute_as_font_features (::PangoAttribute* attr /*none*/);
Pango::AttrFontFeatures_Ref base::AttributeBase::as_font_features () noexcept
{
  typedef ::PangoAttrFontFeatures* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_font_features;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrInt* /*none,nullable*/ pango_attribute_as_int (PangoAttribute* attr /*none*/);
// ::PangoAttrInt* /*none,nullable*/ pango_attribute_as_int (::PangoAttribute* attr /*none*/);
Pango::AttrInt_Ref base::AttributeBase::as_int () noexcept
{
  typedef ::PangoAttrInt* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_int;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrLanguage* /*none,nullable*/ pango_attribute_as_language (PangoAttribute* attr /*none*/);
// ::PangoAttrLanguage* /*none,nullable*/ pango_attribute_as_language (::PangoAttribute* attr /*none*/);
Pango::AttrLanguage_Ref base::AttributeBase::as_language () noexcept
{
  typedef ::PangoAttrLanguage* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_language;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrShape* /*none,nullable*/ pango_attribute_as_shape (PangoAttribute* attr /*none*/);
// ::PangoAttrShape* /*none,nullable*/ pango_attribute_as_shape (::PangoAttribute* attr /*none*/);
Pango::AttrShape_Ref base::AttributeBase::as_shape () noexcept
{
  typedef ::PangoAttrShape* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_shape;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrSize* /*none,nullable*/ pango_attribute_as_size (PangoAttribute* attr /*none*/);
// ::PangoAttrSize* /*none,nullable*/ pango_attribute_as_size (::PangoAttribute* attr /*none*/);
Pango::AttrSize_Ref base::AttributeBase::as_size () noexcept
{
  typedef ::PangoAttrSize* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_size;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrString* /*none,nullable*/ pango_attribute_as_string (PangoAttribute* attr /*none*/);
// ::PangoAttrString* /*none,nullable*/ pango_attribute_as_string (::PangoAttribute* attr /*none*/);
Pango::AttrString_Ref base::AttributeBase::as_string () noexcept
{
  typedef ::PangoAttrString* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_as_string;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttribute* /*full*/ pango_attribute_copy (const PangoAttribute* attr /*none*/);
// ::PangoAttribute* /*full*/ pango_attribute_copy (const ::PangoAttribute* attr /*none*/);
Pango::Attribute base::AttributeBase::copy () const noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_copy;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_attribute_destroy (PangoAttribute* attr /*none*/);
// void pango_attribute_destroy (::PangoAttribute* attr /*none*/);
void base::AttributeBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_destroy;
  call_wrap_v ((::PangoAttribute*) (gobj_()));
}

// gboolean pango_attribute_equal (const PangoAttribute* attr1 /*none*/, const PangoAttribute* attr2 /*none*/);
// gboolean pango_attribute_equal (const ::PangoAttribute* attr1 /*none*/, const ::PangoAttribute* attr2 /*none*/);
bool base::AttributeBase::equal (const Pango::Attribute_Ref attr2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoAttribute* attr1, const ::PangoAttribute* attr2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_equal;
  auto attr2_to_c = gi::unwrap (attr2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()), (const ::PangoAttribute*) (attr2_to_c));
  return _temp_ret;
}

// void pango_attribute_init (PangoAttribute* attr /*none*/, const PangoAttrClass* klass /*none*/);
// void pango_attribute_init (::PangoAttribute* attr /*none*/, const ::PangoAttrClass* klass /*none*/);
void base::AttributeBase::init (const Pango::AttrClass_Ref klass) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* attr, const ::PangoAttrClass* klass);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attribute_init;
  auto klass_to_c = gi::unwrap (klass, gi::transfer_none);
  call_wrap_v ((::PangoAttribute*) (gobj_()), (const ::PangoAttrClass*) (klass_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_def_impl.hpp>)
#include <pango/attribute_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_impl.hpp>)
#include <pango/attribute_extra_impl.hpp>
#endif
#endif

#endif
