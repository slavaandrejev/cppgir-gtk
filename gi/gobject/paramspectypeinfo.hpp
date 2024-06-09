// AUTO-GENERATED

#ifndef _GI_GOBJECT_PARAMSPECTYPEINFO_HPP_
#define _GI_GOBJECT_PARAMSPECTYPEINFO_HPP_


namespace gi {

namespace repository {

namespace GObject {

class ParamSpecTypeInfo_Ref;

class ParamSpecTypeInfo;

namespace base {


#define GI_GOBJECT_PARAMSPECTYPEINFO_BASE base::ParamSpecTypeInfoBase
class ParamSpecTypeInfoBase : public gi::detail::CBoxedWrapperBase<ParamSpecTypeInfoBase, ::GParamSpecTypeInfo>
{
typedef gi::detail::CBoxedWrapperBase<ParamSpecTypeInfoBase, ::GParamSpecTypeInfo> super_type;
public:

ParamSpecTypeInfoBase (std::nullptr_t = nullptr) : super_type() {}

// guint16 ParamSpecTypeInfo::instance_size (const ::GParamSpecTypeInfo* obj /*none*/);
// guint16 ParamSpecTypeInfo::instance_size (const ::GParamSpecTypeInfo* obj /*none*/);
GI_INLINE_DECL guint16 instance_size_ () const noexcept;

//  ParamSpecTypeInfo::instance_size (::GParamSpecTypeInfo* obj /*none*/, guint16 _value);
// void ParamSpecTypeInfo::instance_size (::GParamSpecTypeInfo* obj /*none*/, guint16 _value);
GI_INLINE_DECL void instance_size_ (guint16 _value) noexcept;

// guint16 ParamSpecTypeInfo::n_preallocs (const ::GParamSpecTypeInfo* obj /*none*/);
// guint16 ParamSpecTypeInfo::n_preallocs (const ::GParamSpecTypeInfo* obj /*none*/);
GI_INLINE_DECL guint16 n_preallocs_ () const noexcept;

//  ParamSpecTypeInfo::n_preallocs (::GParamSpecTypeInfo* obj /*none*/, guint16 _value);
// void ParamSpecTypeInfo::n_preallocs (::GParamSpecTypeInfo* obj /*none*/, guint16 _value);
GI_INLINE_DECL void n_preallocs_ (guint16 _value) noexcept;

// GType ParamSpecTypeInfo::value_type (const ::GParamSpecTypeInfo* obj /*none*/);
// GType ParamSpecTypeInfo::value_type (const ::GParamSpecTypeInfo* obj /*none*/);
GI_INLINE_DECL GType value_type_ () const noexcept;

//  ParamSpecTypeInfo::value_type (::GParamSpecTypeInfo* obj /*none*/, GType _value);
// void ParamSpecTypeInfo::value_type (::GParamSpecTypeInfo* obj /*none*/, GType _value);
GI_INLINE_DECL void value_type_ (GType _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/paramspectypeinfo_extra_def.hpp>)
#include <gobject/paramspectypeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/paramspectypeinfo_extra.hpp>)
#include <gobject/paramspectypeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class ParamSpecTypeInfo_Ref;

class ParamSpecTypeInfo : public gi::detail::CBoxedWrapper<ParamSpecTypeInfo, ::GParamSpecTypeInfo, GI_GOBJECT_PARAMSPECTYPEINFO_BASE, ParamSpecTypeInfo_Ref>
{ typedef gi::detail::CBoxedWrapper<ParamSpecTypeInfo, ::GParamSpecTypeInfo, GI_GOBJECT_PARAMSPECTYPEINFO_BASE, ParamSpecTypeInfo_Ref> super_type; using super_type::super_type; };


class ParamSpecTypeInfo_Ref : public gi::detail::CBoxedRefWrapper<ParamSpecTypeInfo, ::GParamSpecTypeInfo, GI_GOBJECT_PARAMSPECTYPEINFO_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ParamSpecTypeInfo, ::GParamSpecTypeInfo, GI_GOBJECT_PARAMSPECTYPEINFO_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GParamSpecTypeInfo>
{ typedef GObject::ParamSpecTypeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
