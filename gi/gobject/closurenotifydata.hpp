// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURENOTIFYDATA_HPP_
#define _GI_GOBJECT_CLOSURENOTIFYDATA_HPP_


namespace gi {

namespace repository {

namespace GObject {


class ClosureNotifyData;

namespace base {


#define GI_GOBJECT_CLOSURENOTIFYDATA_BASE base::ClosureNotifyDataBase
class ClosureNotifyDataBase : public gi::detail::CBoxedWrapperBase<ClosureNotifyDataBase, ::GClosureNotifyData>
{
typedef gi::detail::CBoxedWrapperBase<ClosureNotifyDataBase, ::GClosureNotifyData> super_type;
public:

ClosureNotifyDataBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closurenotifydata_extra_def.hpp>)
#include <gobject/closurenotifydata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closurenotifydata_extra.hpp>)
#include <gobject/closurenotifydata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class ClosureNotifyData_Ref;

class ClosureNotifyData : public gi::detail::CBoxedWrapper<ClosureNotifyData, ::GClosureNotifyData, GI_GOBJECT_CLOSURENOTIFYDATA_BASE, ClosureNotifyData_Ref>
{ typedef gi::detail::CBoxedWrapper<ClosureNotifyData, ::GClosureNotifyData, GI_GOBJECT_CLOSURENOTIFYDATA_BASE, ClosureNotifyData_Ref> super_type; using super_type::super_type; };


class ClosureNotifyData_Ref : public gi::detail::CBoxedRefWrapper<ClosureNotifyData, ::GClosureNotifyData, GI_GOBJECT_CLOSURENOTIFYDATA_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ClosureNotifyData, ::GClosureNotifyData, GI_GOBJECT_CLOSURENOTIFYDATA_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GClosureNotifyData>
{ typedef GObject::ClosureNotifyData type; }; 

} // namespace repository

} // namespace gi

#endif
