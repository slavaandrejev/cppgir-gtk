// AUTO-GENERATED

#ifndef _GI_GOBJECT_OBJECTCONSTRUCTPARAM_HPP_
#define _GI_GOBJECT_OBJECTCONSTRUCTPARAM_HPP_


namespace gi {

namespace repository {

namespace GObject {

class ObjectConstructParam_Ref;
class ParamSpec;
class Value;
class Value_Ref;

class ObjectConstructParam;

namespace base {


#define GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE base::ObjectConstructParamBase
class ObjectConstructParamBase : public gi::detail::CBoxedWrapperBase<ObjectConstructParamBase, ::GObjectConstructParam>
{
typedef gi::detail::CBoxedWrapperBase<ObjectConstructParamBase, ::GObjectConstructParam> super_type;
public:

ObjectConstructParamBase (std::nullptr_t = nullptr) : super_type() {}

// ::GParamSpec* /*none*/ ObjectConstructParam::pspec (const ::GObjectConstructParam* obj /*none*/);
// ::GParamSpec* /*none*/ ObjectConstructParam::pspec (const ::GObjectConstructParam* obj /*none*/);
GI_INLINE_DECL GObject::ParamSpec pspec_ () const noexcept;

// ::GValue* /*none*/ ObjectConstructParam::value (const ::GObjectConstructParam* obj /*none*/);
// ::GValue* /*none*/ ObjectConstructParam::value (const ::GObjectConstructParam* obj /*none*/);
GI_INLINE_DECL GObject::Value_Ref value_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra_def.hpp>)
#include <gobject/objectconstructparam_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra.hpp>)
#include <gobject/objectconstructparam_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class ObjectConstructParam_Ref;

class ObjectConstructParam : public gi::detail::CBoxedWrapper<ObjectConstructParam, ::GObjectConstructParam, GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE, ObjectConstructParam_Ref>
{ typedef gi::detail::CBoxedWrapper<ObjectConstructParam, ::GObjectConstructParam, GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE, ObjectConstructParam_Ref> super_type; using super_type::super_type; };


class ObjectConstructParam_Ref : public gi::detail::CBoxedRefWrapper<ObjectConstructParam, ::GObjectConstructParam, GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ObjectConstructParam, ::GObjectConstructParam, GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GObjectConstructParam>
{ typedef GObject::ObjectConstructParam type; }; 

} // namespace repository

} // namespace gi

#endif
