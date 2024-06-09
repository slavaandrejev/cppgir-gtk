// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEFUNDAMENTALINFO_HPP_
#define _GI_GOBJECT_TYPEFUNDAMENTALINFO_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeFundamentalInfo_Ref;

class TypeFundamentalInfo;

namespace base {


#define GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE base::TypeFundamentalInfoBase
class TypeFundamentalInfoBase : public gi::detail::CBoxedWrapperBase<TypeFundamentalInfoBase, ::GTypeFundamentalInfo>
{
typedef gi::detail::CBoxedWrapperBase<TypeFundamentalInfoBase, ::GTypeFundamentalInfo> super_type;
public:

TypeFundamentalInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj /*none*/);
// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj /*none*/);
GI_INLINE_DECL GObject::TypeFundamentalFlags type_flags_ () const noexcept;

//  TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj /*none*/, ::GTypeFundamentalFlags _value);
// void TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj /*none*/, ::GTypeFundamentalFlags _value);
GI_INLINE_DECL void type_flags_ (GObject::TypeFundamentalFlags _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra_def.hpp>)
#include <gobject/typefundamentalinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra.hpp>)
#include <gobject/typefundamentalinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeFundamentalInfo_Ref;

class TypeFundamentalInfo : public gi::detail::CBoxedWrapper<TypeFundamentalInfo, ::GTypeFundamentalInfo, GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE, TypeFundamentalInfo_Ref>
{ typedef gi::detail::CBoxedWrapper<TypeFundamentalInfo, ::GTypeFundamentalInfo, GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE, TypeFundamentalInfo_Ref> super_type; using super_type::super_type; };


class TypeFundamentalInfo_Ref : public gi::detail::CBoxedRefWrapper<TypeFundamentalInfo, ::GTypeFundamentalInfo, GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypeFundamentalInfo, ::GTypeFundamentalInfo, GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeFundamentalInfo>
{ typedef GObject::TypeFundamentalInfo type; }; 

} // namespace repository

} // namespace gi

#endif
