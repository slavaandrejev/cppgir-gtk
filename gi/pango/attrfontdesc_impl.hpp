// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTDESC_IMPL_HPP_
#define _GI_PANGO_ATTRFONTDESC_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoFontDescription* _field_desc_get (const ::PangoAttrFontDesc* obj) { return (::PangoFontDescription*) obj->desc; }
// ::PangoFontDescription* /*none*/ AttrFontDesc::desc (const ::PangoAttrFontDesc* obj /*none*/);
// ::PangoFontDescription* /*none*/ AttrFontDesc::desc (const ::PangoAttrFontDesc* obj /*none*/);
Pango::FontDescription_Ref base::AttrFontDescBase::desc_ () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::PangoAttrFontDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_desc_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrFontDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttribute* /*full*/ pango_attr_font_desc_new (const PangoFontDescription* desc /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_font_desc_new (const ::PangoFontDescription* desc /*none*/);
Pango::Attribute base::AttrFontDescBase::new_ (const Pango::FontDescription_Ref desc) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_font_desc_new;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra_def_impl.hpp>)
#include <pango/attrfontdesc_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra_impl.hpp>)
#include <pango/attrfontdesc_extra_impl.hpp>
#endif
#endif

#endif
