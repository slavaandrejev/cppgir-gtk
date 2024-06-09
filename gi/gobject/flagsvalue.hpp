// AUTO-GENERATED

#ifndef _GI_GOBJECT_FLAGSVALUE_HPP_
#define _GI_GOBJECT_FLAGSVALUE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class FlagsValue_Ref;

class FlagsValue;

namespace base {


#define GI_GOBJECT_FLAGSVALUE_BASE base::FlagsValueBase
class FlagsValueBase : public gi::detail::CBoxedWrapperBase<FlagsValueBase, ::GFlagsValue>
{
typedef gi::detail::CBoxedWrapperBase<FlagsValueBase, ::GFlagsValue> super_type;
public:

FlagsValueBase (std::nullptr_t = nullptr) : super_type() {}

// guint FlagsValue::value (const ::GFlagsValue* obj /*none*/);
// guint FlagsValue::value (const ::GFlagsValue* obj /*none*/);
GI_INLINE_DECL guint value_ () const noexcept;

//  FlagsValue::value (::GFlagsValue* obj /*none*/, guint _value);
// void FlagsValue::value (::GFlagsValue* obj /*none*/, guint _value);
GI_INLINE_DECL void value_ (guint _value) noexcept;

// const char* /*none*/ FlagsValue::value_name (const ::GFlagsValue* obj /*none*/);
// const char* /*none*/ FlagsValue::value_name (const ::GFlagsValue* obj /*none*/);
GI_INLINE_DECL gi::cstring_v value_name_ () const noexcept;

// const char* /*none*/ FlagsValue::value_nick (const ::GFlagsValue* obj /*none*/);
// const char* /*none*/ FlagsValue::value_nick (const ::GFlagsValue* obj /*none*/);
GI_INLINE_DECL gi::cstring_v value_nick_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra_def.hpp>)
#include <gobject/flagsvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra.hpp>)
#include <gobject/flagsvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class FlagsValue_Ref;

class FlagsValue : public gi::detail::CBoxedWrapper<FlagsValue, ::GFlagsValue, GI_GOBJECT_FLAGSVALUE_BASE, FlagsValue_Ref>
{ typedef gi::detail::CBoxedWrapper<FlagsValue, ::GFlagsValue, GI_GOBJECT_FLAGSVALUE_BASE, FlagsValue_Ref> super_type; using super_type::super_type; };


class FlagsValue_Ref : public gi::detail::CBoxedRefWrapper<FlagsValue, ::GFlagsValue, GI_GOBJECT_FLAGSVALUE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<FlagsValue, ::GFlagsValue, GI_GOBJECT_FLAGSVALUE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GFlagsValue>
{ typedef GObject::FlagsValue type; }; 

} // namespace repository

} // namespace gi

#endif
