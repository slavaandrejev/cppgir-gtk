// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRCLASS_HPP_
#define _GI_PANGO_ATTRCLASS_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrClass_Ref;

class AttrClass;

namespace base {


#define GI_PANGO_ATTRCLASS_BASE base::AttrClassBase
class AttrClassBase : public gi::detail::CBoxedWrapperBase<AttrClassBase, ::PangoAttrClass>
{
typedef gi::detail::CBoxedWrapperBase<AttrClassBase, ::PangoAttrClass> super_type;
public:

AttrClassBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj /*none*/);
// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj /*none*/);
GI_INLINE_DECL Pango::AttrType type_ () const noexcept;

//  AttrClass::type (::PangoAttrClass* obj /*none*/, ::PangoAttrType _value);
// void AttrClass::type (::PangoAttrClass* obj /*none*/, ::PangoAttrType _value);
GI_INLINE_DECL void type_ (Pango::AttrType _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra_def.hpp>)
#include <pango/attrclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra.hpp>)
#include <pango/attrclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrClass_Ref;

class AttrClass : public gi::detail::CBoxedWrapper<AttrClass, ::PangoAttrClass, GI_PANGO_ATTRCLASS_BASE, AttrClass_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrClass, ::PangoAttrClass, GI_PANGO_ATTRCLASS_BASE, AttrClass_Ref> super_type; using super_type::super_type; };


class AttrClass_Ref : public gi::detail::CBoxedRefWrapper<AttrClass, ::PangoAttrClass, GI_PANGO_ATTRCLASS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrClass, ::PangoAttrClass, GI_PANGO_ATTRCLASS_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrClass>
{ typedef Pango::AttrClass type; }; 

} // namespace repository

} // namespace gi

#endif
