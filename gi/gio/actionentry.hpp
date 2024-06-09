// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONENTRY_HPP_
#define _GI_GIO_ACTIONENTRY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionEntry_Ref;

class ActionEntry;

namespace base {


#define GI_GIO_ACTIONENTRY_BASE base::ActionEntryBase
class ActionEntryBase : public gi::detail::CBoxedWrapperBase<ActionEntryBase, ::GActionEntry>
{
typedef gi::detail::CBoxedWrapperBase<ActionEntryBase, ::GActionEntry> super_type;
public:

ActionEntryBase (std::nullptr_t = nullptr) : super_type() {}

// const char* /*none*/ ActionEntry::name (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::name (const ::GActionEntry* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// const char* /*none*/ ActionEntry::parameter_type (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::parameter_type (const ::GActionEntry* obj /*none*/);
GI_INLINE_DECL gi::cstring_v parameter_type_ () const noexcept;

// const char* /*none*/ ActionEntry::state (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::state (const ::GActionEntry* obj /*none*/);
GI_INLINE_DECL gi::cstring_v state_ () const noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra_def.hpp>)
#include <gio/actionentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra.hpp>)
#include <gio/actionentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ActionEntry_Ref;

class ActionEntry : public gi::detail::CBoxedWrapper<ActionEntry, ::GActionEntry, GI_GIO_ACTIONENTRY_BASE, ActionEntry_Ref>
{ typedef gi::detail::CBoxedWrapper<ActionEntry, ::GActionEntry, GI_GIO_ACTIONENTRY_BASE, ActionEntry_Ref> super_type; using super_type::super_type; };


class ActionEntry_Ref : public gi::detail::CBoxedRefWrapper<ActionEntry, ::GActionEntry, GI_GIO_ACTIONENTRY_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ActionEntry, ::GActionEntry, GI_GIO_ACTIONENTRY_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GActionEntry>
{ typedef Gio::ActionEntry type; }; 

} // namespace repository

} // namespace gi

#endif
