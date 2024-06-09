// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMVALUE_HPP_
#define _GI_GOBJECT_ENUMVALUE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class EnumValue_Ref;

class EnumValue;

namespace base {


#define GI_GOBJECT_ENUMVALUE_BASE base::EnumValueBase
class EnumValueBase : public gi::detail::CBoxedWrapperBase<EnumValueBase, ::GEnumValue>
{
typedef gi::detail::CBoxedWrapperBase<EnumValueBase, ::GEnumValue> super_type;
public:

EnumValueBase (std::nullptr_t = nullptr) : super_type() {}

// gint EnumValue::value (const ::GEnumValue* obj /*none*/);
// gint EnumValue::value (const ::GEnumValue* obj /*none*/);
GI_INLINE_DECL gint value_ () const noexcept;

//  EnumValue::value (::GEnumValue* obj /*none*/, gint _value);
// void EnumValue::value (::GEnumValue* obj /*none*/, gint _value);
GI_INLINE_DECL void value_ (gint _value) noexcept;

// const char* /*none*/ EnumValue::value_name (const ::GEnumValue* obj /*none*/);
// const char* /*none*/ EnumValue::value_name (const ::GEnumValue* obj /*none*/);
GI_INLINE_DECL gi::cstring_v value_name_ () const noexcept;

// const char* /*none*/ EnumValue::value_nick (const ::GEnumValue* obj /*none*/);
// const char* /*none*/ EnumValue::value_nick (const ::GEnumValue* obj /*none*/);
GI_INLINE_DECL gi::cstring_v value_nick_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra_def.hpp>)
#include <gobject/enumvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra.hpp>)
#include <gobject/enumvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class EnumValue_Ref;

class EnumValue : public gi::detail::CBoxedWrapper<EnumValue, ::GEnumValue, GI_GOBJECT_ENUMVALUE_BASE, EnumValue_Ref>
{ typedef gi::detail::CBoxedWrapper<EnumValue, ::GEnumValue, GI_GOBJECT_ENUMVALUE_BASE, EnumValue_Ref> super_type; using super_type::super_type; };


class EnumValue_Ref : public gi::detail::CBoxedRefWrapper<EnumValue, ::GEnumValue, GI_GOBJECT_ENUMVALUE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<EnumValue, ::GEnumValue, GI_GOBJECT_ENUMVALUE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GEnumValue>
{ typedef GObject::EnumValue type; }; 

} // namespace repository

} // namespace gi

#endif
