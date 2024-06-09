// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMCLASS_HPP_
#define _GI_GOBJECT_ENUMCLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {

class EnumClass_Ref;
class EnumValue;
class EnumValue_Ref;

class EnumClass;

namespace base {


#define GI_GOBJECT_ENUMCLASS_BASE base::EnumClassBase
class EnumClassBase : public gi::detail::CBoxedWrapperBase<EnumClassBase, ::GEnumClass>
{
typedef gi::detail::CBoxedWrapperBase<EnumClassBase, ::GEnumClass> super_type;
public:

EnumClassBase (std::nullptr_t = nullptr) : super_type() {}

// gint EnumClass::minimum (const ::GEnumClass* obj /*none*/);
// gint EnumClass::minimum (const ::GEnumClass* obj /*none*/);
GI_INLINE_DECL gint minimum_ () const noexcept;

//  EnumClass::minimum (::GEnumClass* obj /*none*/, gint _value);
// void EnumClass::minimum (::GEnumClass* obj /*none*/, gint _value);
GI_INLINE_DECL void minimum_ (gint _value) noexcept;

// gint EnumClass::maximum (const ::GEnumClass* obj /*none*/);
// gint EnumClass::maximum (const ::GEnumClass* obj /*none*/);
GI_INLINE_DECL gint maximum_ () const noexcept;

//  EnumClass::maximum (::GEnumClass* obj /*none*/, gint _value);
// void EnumClass::maximum (::GEnumClass* obj /*none*/, gint _value);
GI_INLINE_DECL void maximum_ (gint _value) noexcept;

// guint EnumClass::n_values (const ::GEnumClass* obj /*none*/);
// guint EnumClass::n_values (const ::GEnumClass* obj /*none*/);
GI_INLINE_DECL guint n_values_ () const noexcept;

//  EnumClass::n_values (::GEnumClass* obj /*none*/, guint _value);
// void EnumClass::n_values (::GEnumClass* obj /*none*/, guint _value);
GI_INLINE_DECL void n_values_ (guint _value) noexcept;

// ::GEnumValue* /*none*/ EnumClass::values (const ::GEnumClass* obj /*none*/);
// ::GEnumValue* /*none*/ EnumClass::values (const ::GEnumClass* obj /*none*/);
GI_INLINE_DECL GObject::EnumValue_Ref values_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra_def.hpp>)
#include <gobject/enumclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra.hpp>)
#include <gobject/enumclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class EnumClass_Ref;

class EnumClass : public gi::detail::CBoxedWrapper<EnumClass, ::GEnumClass, GI_GOBJECT_ENUMCLASS_BASE, EnumClass_Ref>
{ typedef gi::detail::CBoxedWrapper<EnumClass, ::GEnumClass, GI_GOBJECT_ENUMCLASS_BASE, EnumClass_Ref> super_type; using super_type::super_type; };


class EnumClass_Ref : public gi::detail::CBoxedRefWrapper<EnumClass, ::GEnumClass, GI_GOBJECT_ENUMCLASS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<EnumClass, ::GEnumClass, GI_GOBJECT_ENUMCLASS_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GEnumClass>
{ typedef GObject::EnumClass type; }; 

} // namespace repository

} // namespace gi

#endif
