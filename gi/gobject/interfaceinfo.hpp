// AUTO-GENERATED

#ifndef _GI_GOBJECT_INTERFACEINFO_HPP_
#define _GI_GOBJECT_INTERFACEINFO_HPP_


namespace gi {

namespace repository {

namespace GObject {


class InterfaceInfo;

namespace base {


#define GI_GOBJECT_INTERFACEINFO_BASE base::InterfaceInfoBase
class InterfaceInfoBase : public gi::detail::CBoxedWrapperBase<InterfaceInfoBase, ::GInterfaceInfo>
{
typedef gi::detail::CBoxedWrapperBase<InterfaceInfoBase, ::GInterfaceInfo> super_type;
public:

InterfaceInfoBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/interfaceinfo_extra_def.hpp>)
#include <gobject/interfaceinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/interfaceinfo_extra.hpp>)
#include <gobject/interfaceinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class InterfaceInfo_Ref;

class InterfaceInfo : public gi::detail::CBoxedWrapper<InterfaceInfo, ::GInterfaceInfo, GI_GOBJECT_INTERFACEINFO_BASE, InterfaceInfo_Ref>
{ typedef gi::detail::CBoxedWrapper<InterfaceInfo, ::GInterfaceInfo, GI_GOBJECT_INTERFACEINFO_BASE, InterfaceInfo_Ref> super_type; using super_type::super_type; };


class InterfaceInfo_Ref : public gi::detail::CBoxedRefWrapper<InterfaceInfo, ::GInterfaceInfo, GI_GOBJECT_INTERFACEINFO_BASE>
{ typedef gi::detail::CBoxedRefWrapper<InterfaceInfo, ::GInterfaceInfo, GI_GOBJECT_INTERFACEINFO_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GInterfaceInfo>
{ typedef GObject::InterfaceInfo type; }; 

} // namespace repository

} // namespace gi

#endif
